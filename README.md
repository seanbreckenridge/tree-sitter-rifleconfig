# tree-sitter-rifleconfig

This is a [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for your [rifle config](https://github.com/ranger/ranger/blob/master/ranger/config/rifle.conf) file, which is a file-launcher for [ranger](https://github.com/ranger/ranger/) (a terminal filemanager).

This is a WIP, so the underlying node/fields might change as the grammar improves, but it is good enough to use for highlighting -- it currently parses the config file into conditions/expressions, and highlights the buffer:

![image](https://github.com/seanbreckenridge/tree-sitter-rifleconfig/assets/7804791/739bde0c-1907-41cc-a6ec-7cc3abf96dea)

### Neovim

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

To automatically set the filetype to `rifleconfig`, you could use an autocmd, add `vim.filetype.add({filename = {['rifle.conf'] = 'rifleconfig'}})` to your startup script, or set the modeline (`:help modeline`) by adding `# vim: ft=rifleconfig` to the top of your config file.

_close nvim and open your rifle.conf_

- `:TSInstall rifleconfig`
- `:edit`
- `:InspectTree`

For syntax highlighting and `commenting` support, you can copy the files in `after` to your `runtimepath`, or just install this repository with your plugin manager. E.g. for [`lazy`](https://github.com/folke/lazy.nvim):

```lua
{
    'seanbreckenridge/tree-sitter-rifleconfig',
    ft = 'rifleconfig',
}
```

If you want to highlight the commands in each rule with the `bash` tree-sitter parser, `:TSInstall bash`, and then copy this into your `~/.config/nvim/queries/rifleconfig/injections.scm`:

```lisp
; extends

(command_list
  (command) @injection.content
  (#set! injection.include-children)
  (#set! injection.language "bash"))
```
