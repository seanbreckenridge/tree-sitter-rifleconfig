package tree_sitter_rifleconfig_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-rifleconfig"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rifleconfig.Language())
	if language == nil {
		t.Errorf("Error loading Rifleconfig grammar")
	}
}
