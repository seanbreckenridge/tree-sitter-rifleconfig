; extends

(binary_condition_expression
  (binary_condition_identifier) @rc_keyword
  (identifier) @injection.content
  (#any-of? @rc_keyword "match" "ext" "mime" "name" "path" "has" "env" "label")
  (#set! injection.language "regex"))
