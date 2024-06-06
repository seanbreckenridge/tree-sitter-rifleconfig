; extends

(comment) @comment @spell

[
 ","
 ";"
]@punctuation.delimiter

"=" @operator

(binary_condition_identifier) @function.builtin

(unary_condition_identifier) @function.builtin

(ask) @function.builtin

(string) @string
