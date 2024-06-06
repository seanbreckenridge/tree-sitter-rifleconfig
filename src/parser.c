#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__spaces = 2,
  aux_sym__end_of_line_token1 = 3,
  anon_sym_X = 4,
  anon_sym_file = 5,
  anon_sym_directory = 6,
  anon_sym_terminal = 7,
  anon_sym_else = 8,
  anon_sym_match = 9,
  anon_sym_ext = 10,
  anon_sym_mime = 11,
  anon_sym_name = 12,
  anon_sym_path = 13,
  anon_sym_has = 14,
  anon_sym_env = 15,
  anon_sym_number = 16,
  anon_sym_flag = 17,
  anon_sym_label = 18,
  anon_sym_LBRACK = 19,
  anon_sym_BSLASH = 20,
  aux_sym_identifier_token1 = 21,
  aux_sym_identifier_token2 = 22,
  anon_sym_RBRACK = 23,
  aux_sym_identifier_token3 = 24,
  anon_sym_COMMA = 25,
  sym_string = 26,
  anon_sym_EQ = 27,
  sym_source_file = 28,
  sym__end_of_line = 29,
  sym_unary_condition_identifier = 30,
  sym_binary_condition_identifier = 31,
  sym_identifier = 32,
  sym_binary_condition_expression = 33,
  sym_condition_expression = 34,
  sym_conditions = 35,
  sym_word = 36,
  sym_command_list = 37,
  sym_rule = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_identifier_repeat1 = 40,
  aux_sym_identifier_repeat2 = 41,
  aux_sym_conditions_repeat1 = 42,
  aux_sym_command_list_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__spaces] = "_spaces",
  [aux_sym__end_of_line_token1] = "_end_of_line_token1",
  [anon_sym_X] = "X",
  [anon_sym_file] = "file",
  [anon_sym_directory] = "directory",
  [anon_sym_terminal] = "terminal",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_ext] = "ext",
  [anon_sym_mime] = "mime",
  [anon_sym_name] = "name",
  [anon_sym_path] = "path",
  [anon_sym_has] = "has",
  [anon_sym_env] = "env",
  [anon_sym_number] = "number",
  [anon_sym_flag] = "flag",
  [anon_sym_label] = "label",
  [anon_sym_LBRACK] = "[",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_RBRACK] = "]",
  [aux_sym_identifier_token3] = "identifier_token3",
  [anon_sym_COMMA] = ",",
  [sym_string] = "string",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__end_of_line] = "_end_of_line",
  [sym_unary_condition_identifier] = "unary_condition_identifier",
  [sym_binary_condition_identifier] = "binary_condition_identifier",
  [sym_identifier] = "identifier",
  [sym_binary_condition_expression] = "binary_condition_expression",
  [sym_condition_expression] = "condition_expression",
  [sym_conditions] = "conditions",
  [sym_word] = "word",
  [sym_command_list] = "command_list",
  [sym_rule] = "rule",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_identifier_repeat2] = "identifier_repeat2",
  [aux_sym_conditions_repeat1] = "conditions_repeat1",
  [aux_sym_command_list_repeat1] = "command_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__spaces] = sym__spaces,
  [aux_sym__end_of_line_token1] = aux_sym__end_of_line_token1,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_directory] = anon_sym_directory,
  [anon_sym_terminal] = anon_sym_terminal,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_ext] = anon_sym_ext,
  [anon_sym_mime] = anon_sym_mime,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_identifier_token3] = aux_sym_identifier_token3,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_string] = sym_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_source_file] = sym_source_file,
  [sym__end_of_line] = sym__end_of_line,
  [sym_unary_condition_identifier] = sym_unary_condition_identifier,
  [sym_binary_condition_identifier] = sym_binary_condition_identifier,
  [sym_identifier] = sym_identifier,
  [sym_binary_condition_expression] = sym_binary_condition_expression,
  [sym_condition_expression] = sym_condition_expression,
  [sym_conditions] = sym_conditions,
  [sym_word] = sym_word,
  [sym_command_list] = sym_command_list,
  [sym_rule] = sym_rule,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_identifier_repeat2] = aux_sym_identifier_repeat2,
  [aux_sym_conditions_repeat1] = aux_sym_conditions_repeat1,
  [aux_sym_command_list_repeat1] = aux_sym_command_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__spaces] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__end_of_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_directory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terminal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_condition_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_condition_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_condition_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_command_list] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 14,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 41,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '#', 57,
        ',', 82,
        '=', 84,
        'X', 60,
        '[', 75,
        '\\', 76,
        ']', 79,
        '\t', 58,
        ' ', 58,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '"', 81,
        '#', 57,
        '[', 75,
        '\\', 76,
        '\t', 58,
        ' ', 58,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '\n', 59,
        '\r', 1,
        '#', 57,
        ',', 82,
        '=', 84,
        'X', 60,
        'd', 29,
        'e', 32,
        'f', 30,
        'h', 9,
        'l', 7,
        'm', 10,
        'n', 13,
        'p', 11,
        't', 22,
        '\t', 58,
        ' ', 58,
      );
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__spaces);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__end_of_line_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_directory);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_terminal);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_mime);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__spaces] = ACTIONS(3),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_identifier_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__end_of_line] = STATE(2),
    [sym_unary_condition_identifier] = STATE(36),
    [sym_binary_condition_identifier] = STATE(46),
    [sym_binary_condition_expression] = STATE(36),
    [sym_condition_expression] = STATE(31),
    [sym_conditions] = STATE(43),
    [sym_rule] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__spaces] = ACTIONS(9),
    [aux_sym__end_of_line_token1] = ACTIONS(11),
    [anon_sym_X] = ACTIONS(13),
    [anon_sym_file] = ACTIONS(13),
    [anon_sym_directory] = ACTIONS(13),
    [anon_sym_terminal] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_ext] = ACTIONS(15),
    [anon_sym_mime] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(15),
    [anon_sym_path] = ACTIONS(15),
    [anon_sym_has] = ACTIONS(15),
    [anon_sym_env] = ACTIONS(15),
    [anon_sym_number] = ACTIONS(15),
    [anon_sym_flag] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
  },
  [2] = {
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(36),
    [sym_binary_condition_identifier] = STATE(46),
    [sym_binary_condition_expression] = STATE(36),
    [sym_condition_expression] = STATE(31),
    [sym_conditions] = STATE(43),
    [sym_rule] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(7),
    [sym__spaces] = ACTIONS(9),
    [aux_sym__end_of_line_token1] = ACTIONS(19),
    [anon_sym_X] = ACTIONS(13),
    [anon_sym_file] = ACTIONS(13),
    [anon_sym_directory] = ACTIONS(13),
    [anon_sym_terminal] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_ext] = ACTIONS(15),
    [anon_sym_mime] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(15),
    [anon_sym_path] = ACTIONS(15),
    [anon_sym_has] = ACTIONS(15),
    [anon_sym_env] = ACTIONS(15),
    [anon_sym_number] = ACTIONS(15),
    [anon_sym_flag] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
  },
  [3] = {
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(36),
    [sym_binary_condition_identifier] = STATE(46),
    [sym_binary_condition_expression] = STATE(36),
    [sym_condition_expression] = STATE(31),
    [sym_conditions] = STATE(43),
    [sym_rule] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym__spaces] = ACTIONS(26),
    [aux_sym__end_of_line_token1] = ACTIONS(29),
    [anon_sym_X] = ACTIONS(32),
    [anon_sym_file] = ACTIONS(32),
    [anon_sym_directory] = ACTIONS(32),
    [anon_sym_terminal] = ACTIONS(32),
    [anon_sym_else] = ACTIONS(32),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_ext] = ACTIONS(35),
    [anon_sym_mime] = ACTIONS(35),
    [anon_sym_name] = ACTIONS(35),
    [anon_sym_path] = ACTIONS(35),
    [anon_sym_has] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(35),
    [anon_sym_number] = ACTIONS(35),
    [anon_sym_flag] = ACTIONS(35),
    [anon_sym_label] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    STATE(34), 1,
      sym_condition_expression,
    STATE(46), 1,
      sym_binary_condition_identifier,
    STATE(36), 2,
      sym_unary_condition_identifier,
      sym_binary_condition_expression,
    ACTIONS(13), 5,
      anon_sym_X,
      anon_sym_file,
      anon_sym_directory,
      anon_sym_terminal,
      anon_sym_else,
    ACTIONS(15), 10,
      anon_sym_match,
      anon_sym_ext,
      anon_sym_mime,
      anon_sym_name,
      anon_sym_path,
      anon_sym_has,
      anon_sym_env,
      anon_sym_number,
      anon_sym_flag,
      anon_sym_label,
  [33] = 1,
    ACTIONS(21), 19,
      ts_builtin_sym_end,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_X,
      anon_sym_file,
      anon_sym_directory,
      anon_sym_terminal,
      anon_sym_else,
      anon_sym_match,
      anon_sym_ext,
      anon_sym_mime,
      anon_sym_name,
      anon_sym_path,
      anon_sym_has,
      anon_sym_env,
      anon_sym_number,
      anon_sym_flag,
      anon_sym_label,
  [55] = 1,
    ACTIONS(38), 19,
      ts_builtin_sym_end,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_X,
      anon_sym_file,
      anon_sym_directory,
      anon_sym_terminal,
      anon_sym_else,
      anon_sym_match,
      anon_sym_ext,
      anon_sym_mime,
      anon_sym_name,
      anon_sym_path,
      anon_sym_has,
      anon_sym_env,
      anon_sym_number,
      anon_sym_flag,
      anon_sym_label,
  [77] = 1,
    ACTIONS(40), 19,
      ts_builtin_sym_end,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_X,
      anon_sym_file,
      anon_sym_directory,
      anon_sym_terminal,
      anon_sym_else,
      anon_sym_match,
      anon_sym_ext,
      anon_sym_mime,
      anon_sym_name,
      anon_sym_path,
      anon_sym_has,
      anon_sym_env,
      anon_sym_number,
      anon_sym_flag,
      anon_sym_label,
  [99] = 9,
    ACTIONS(44), 1,
      sym__spaces,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      aux_sym_identifier_token3,
    ACTIONS(56), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(42), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    STATE(8), 2,
      sym_word,
      aux_sym_command_list_repeat1,
  [129] = 9,
    ACTIONS(61), 1,
      sym__spaces,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym_identifier_token3,
    ACTIONS(69), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(59), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    STATE(10), 2,
      sym_word,
      aux_sym_command_list_repeat1,
  [159] = 9,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym_identifier_token3,
    ACTIONS(69), 1,
      sym_string,
    ACTIONS(73), 1,
      sym__spaces,
    STATE(13), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(71), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    STATE(8), 2,
      sym_word,
      aux_sym_command_list_repeat1,
  [189] = 9,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym_identifier_token3,
    ACTIONS(69), 1,
      sym_string,
    STATE(9), 1,
      sym_word,
    STATE(13), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    STATE(29), 1,
      sym_command_list,
  [217] = 5,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      aux_sym_identifier_token3,
    STATE(12), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(75), 4,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      sym_string,
  [236] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    STATE(12), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(86), 4,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      sym_string,
  [255] = 2,
    ACTIONS(90), 1,
      aux_sym_identifier_token3,
    ACTIONS(75), 6,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
  [267] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym_identifier_token3,
    STATE(15), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [287] = 2,
    ACTIONS(103), 1,
      aux_sym_identifier_token3,
    ACTIONS(101), 6,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
  [299] = 2,
    ACTIONS(107), 1,
      aux_sym_identifier_token3,
    ACTIONS(105), 6,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
  [311] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      aux_sym_identifier_token3,
    STATE(15), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [331] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      aux_sym_identifier_token3,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(33), 1,
      sym_identifier,
  [350] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(75), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [361] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(101), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [372] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(119), 1,
      aux_sym_identifier_token2,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_identifier_repeat1,
  [388] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(123), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      aux_sym_identifier_token2,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_identifier_repeat1,
  [404] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      aux_sym_identifier_token2,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
  [420] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      aux_sym_identifier_token2,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_identifier_repeat1,
  [436] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(119), 1,
      aux_sym_identifier_token2,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_identifier_repeat1,
  [452] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__spaces,
    ACTIONS(141), 1,
      aux_sym__end_of_line_token1,
    STATE(5), 1,
      sym__end_of_line,
  [465] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_EQ,
    STATE(28), 1,
      aux_sym_conditions_repeat1,
  [478] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__spaces,
    ACTIONS(148), 1,
      aux_sym__end_of_line_token1,
    STATE(35), 1,
      sym__end_of_line,
  [491] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(150), 1,
      aux_sym_identifier_token2,
    ACTIONS(129), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [502] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym_conditions_repeat1,
  [515] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_EQ,
    STATE(28), 1,
      aux_sym_conditions_repeat1,
  [528] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [536] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [544] = 1,
    ACTIONS(160), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [550] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [558] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [566] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym__end_of_line_token1,
  [576] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(170), 1,
      aux_sym_identifier_token1,
  [583] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(168), 1,
      aux_sym__end_of_line_token1,
  [590] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(172), 1,
      aux_sym_identifier_token1,
  [597] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(174), 1,
      aux_sym__end_of_line_token1,
  [604] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(176), 1,
      anon_sym_EQ,
  [611] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [618] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(180), 1,
      aux_sym_identifier_token1,
  [625] = 1,
    ACTIONS(182), 1,
      sym__spaces,
  [629] = 1,
    ACTIONS(184), 1,
      sym__spaces,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 287,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 331,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 361,
  [SMALL_STATE(22)] = 372,
  [SMALL_STATE(23)] = 388,
  [SMALL_STATE(24)] = 404,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 452,
  [SMALL_STATE(28)] = 465,
  [SMALL_STATE(29)] = 478,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 502,
  [SMALL_STATE(32)] = 515,
  [SMALL_STATE(33)] = 528,
  [SMALL_STATE(34)] = 536,
  [SMALL_STATE(35)] = 544,
  [SMALL_STATE(36)] = 550,
  [SMALL_STATE(37)] = 558,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 576,
  [SMALL_STATE(40)] = 583,
  [SMALL_STATE(41)] = 590,
  [SMALL_STATE(42)] = 597,
  [SMALL_STATE(43)] = 604,
  [SMALL_STATE(44)] = 611,
  [SMALL_STATE(45)] = 618,
  [SMALL_STATE(46)] = 625,
  [SMALL_STATE(47)] = 629,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(45),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(41),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_expression, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_condition_identifier, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_identifier, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rifleconfig(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
