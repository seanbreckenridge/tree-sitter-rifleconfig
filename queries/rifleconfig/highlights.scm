; extends

(comment) @comment @spell

[
  ","
  ";"
] @punctuation.delimiter

"=" @operator

(binary_condition_identifier) @function.builtin

(unary_condition_identifier) @function.builtin

(condition_expression
  (binary_condition_expression
    (binary_condition_identifier) @keyword_name
    (identifier) @number)
  (#eq? @keyword_name "number"))

(ask) @function.builtin

(string) @string
