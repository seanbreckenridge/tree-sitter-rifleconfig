# tree-sitter-rifleconfig

This is a tree-sitter grammar for your [rifle config](https://github.com/ranger/ranger/blob/master/ranger/config/rifle.conf) file, which is a file-launcher for [ranger](https://github.com/ranger/ranger/) (a terminal filemanager).

This is a WIP; It currently parses the config file into basic tokens/conditions/expressions:

![2024-06-05--17_45_42](https://github.com/seanbreckenridge/tree-sitter-rifleconfig/assets/7804791/5dadf935-5cb9-4f81-8f2c-8fa12b542ca6)

TODO:

- [ ] add a `highlights.scm` file next so this highlights the config file nicely.
- [ ] add tests

### Neovim

To automatically set the filetype to `rifleconfig`, you could use an autocmd, `vim.filetype.add` or set the modeline (`:help modeline`) by adding `# vim: ft=rifleconfig` to the top of your config file.

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file), and then add this to your config:

```lua
local parser_config =
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.rifleconfig = {
        install_info = {
            url = "https://github.com/seanbreckenridge/tree-sitter-rifleconfig",
            files = {"src/parser.c"},
            branch = "main"
        }
    }
```

- `:TSInstall rifleconfig`
- `:edit`
- `:InspectTree`
