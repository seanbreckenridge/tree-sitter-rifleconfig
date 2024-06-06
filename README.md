# tree-sitter-rifleconfig

For neovim,

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file), and then add this to your config:

```lua
vim.filetype.add({extension = {rifleconfig = "rifleconfig"}})

local parser_config =
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.rifleconfig = {
        install_info = {
            -- url = "~/Repos/tree-sitter-rifleconfig",
            url = "https://github.com/seanbreckenridge/tree-sitter-rifleconfig",
            files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
            requires_generate_from_grammar = false,
            branch = "main"
        }
    }
```

Then `:TSInstall rifleconfig`
