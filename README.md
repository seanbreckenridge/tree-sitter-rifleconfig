# tree-sitter-rifleconfig

This is a tree-sitter grammar for the [rifle](https://github.com/ranger/ranger/blob/master/ranger/config/rifle.conf) config file, which is a file-launcher for the [ranger](https://github.com/ranger/ranger/) terminal file browser.

This currently parses the config file into basic tokens/conditions/expressions. Once you've installed you can see that with `:InspectTree`

![2024-06-05--17_45_42](https://github.com/seanbreckenridge/tree-sitter-rifleconfig/assets/7804791/5dadf935-5cb9-4f81-8f2c-8fa12b542ca6)

TODO:

- [ ] add a `highlights.scm` file next so this highlights the config file nicely.
- [ ] add tests

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
