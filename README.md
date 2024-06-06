# tree-sitter-rifleconfig

This is a [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for your [rifle config](https://github.com/ranger/ranger/blob/master/ranger/config/rifle.conf) file, which is a file-launcher for [ranger](https://github.com/ranger/ranger/) (a terminal filemanager).

This is a WIP, so the underlying node/fields might change as the grammar improves, but it is good enough to use for highlighting -- it currently parses the config file into conditions/expressions, and highlights the buffer:

![image](https://github.com/seanbreckenridge/tree-sitter-rifleconfig/assets/7804791/7d62fa37-6232-4903-a2b5-88cc6910b318)

### Neovim

To automatically set the filetype to `rifleconfig`, you could use an autocmd, `vim.filetype.add` or set the modeline (`:help modeline`) by adding `# vim: ft=rifleconfig` to the top of your config file.

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file), and then add this to your config:

```lua
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

For syntax highlighting, copy the `./queries/rifleconfig/highlights.scm` file to `~/.config/nvim/queries/rifleconfig/highlights.scm`

For comment support (see `:help commenting`), add `vim.opt_local.commentstring = "-- %s"` to `~/.config/nvim/after/ftplugin/rifleconfig.lua`
