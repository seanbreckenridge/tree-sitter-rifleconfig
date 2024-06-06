module.exports = grammar({
  name: "rifleconfig",

  extras: ($) => [$._spaces],

  rules: {
    source_file: ($) => repeat(choice($.rule, $._end_of_line)),

    comment: (_) => /#[^\n]*/,
    _spaces: (_) => /[ \t]+/,

    // a comment, or the end of the line
    _end_of_line: ($) =>
      choice(
        seq(optional($._spaces), $.comment, /\r?\n/),
        seq(optional($._spaces), /\r?\n/),
      ),

    unary_condition_identifier: (_) =>
      choice("X", "file", "directory", "terminal", "else"),
    //
    binary_condition_identifier: (_) =>
      choice(
        "match",
        "ext",
        "mime",
        "name",
        "path",
        "has",
        "env",
        "number",
        "flag",
        "label",
      ),

    // https://github.com/tree-sitter/tree-sitter-javascript/blob/391a8fcc48a11f63bf18ec9885f6f069e760949a/grammar.js#L1022
    identifier: (_) =>
      prec(
        -1,
        repeat1(
          choice(
            seq(
              "[",
              repeat(
                choice(
                  seq("\\", /./), // escaped character
                  /[^\]\n\\]/, // any character besides ']' or '\n'
                ),
              ),
              "]",
            ), // square-bracket-delimited character class
            seq("\\", /./), // escaped character
            /[^,=\s\\\[\n]/, // any character besides '[', '\', '\n', '=', ',', or whitespace
          ),
        ),
      ),

    // the identifier here has to be a regex-like statement because
    // its used as one in python. even a basic string is called with
    // re.search every time
    binary_condition_expression: ($) =>
      seq($.binary_condition_identifier, $._spaces, $.identifier),

    condition_expression: ($) =>
      seq(
        optional(alias("!", $.condition_negation)),
        choice($.binary_condition_expression, $.unary_condition_identifier),
      ),

    // LHS: conditions needed to run a command
    conditions: ($) =>
      seq(
        $.condition_expression,
        repeat(seq(",", $.condition_expression)),
        optional(","),
      ),

    word: ($) => choice($.identifier, alias(/"[^"]*"/, $.string)),

    command: ($) =>
      prec.right(seq($.word, repeat(choice($.word, $._spaces, ";")))),

    // RHS: what gets run when all conditions are matched
    command_list: ($) =>
      choice(
        prec.left(2, alias("ask", $.ask)),
        prec.left(1, repeat1($.command)),
      ),

    // each line is like:
    // condition1, [condition2, ...] = command
    rule: ($) => seq($.conditions, "=", $.command_list, $._end_of_line),
  },
});
