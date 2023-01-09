((section
  bash_script: (raw_content) @injection.content)
 (#set! injection.language "bash"))

((section
  json: (raw_content) @injection.content)
  (#set! injection.language "json"))

((section
  python_like: (raw_content) @injection.content)
  (#set! injection.language "python"))
