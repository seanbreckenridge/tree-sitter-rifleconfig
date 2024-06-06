#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_condition_negation = 25,
  anon_sym_COMMA = 26,
  sym_string = 27,
  anon_sym_EQ = 28,
  sym_source_file = 29,
  sym__end_of_line = 30,
  sym_unary_condition_identifier = 31,
  sym_binary_condition_identifier = 32,
  sym_identifier = 33,
  sym_binary_condition_expression = 34,
  sym_condition_expression = 35,
  sym_conditions = 36,
  sym_word = 37,
  sym_command_list = 38,
  sym_rule = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_identifier_repeat1 = 41,
  aux_sym_identifier_repeat2 = 42,
  aux_sym_conditions_repeat1 = 43,
  aux_sym_command_list_repeat1 = 44,
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
  [sym_condition_negation] = "condition_negation",
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
  [sym_condition_negation] = sym_condition_negation,
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
  [sym_condition_negation] = {
    .visible = true,
    .named = true,
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
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 24,
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
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '!', 82,
        '#', 57,
        ',', 83,
        '=', 85,
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
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '=') ADVANCE(85);
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
        '!', 82,
        '#', 57,
        ',', 83,
        '=', 85,
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
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_condition_negation);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 85:
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
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
    [sym_condition_negation] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(34),
    [sym_binary_condition_identifier] = STATE(48),
    [sym_binary_condition_expression] = STATE(34),
    [sym_condition_expression] = STATE(32),
    [sym_conditions] = STATE(42),
    [sym_rule] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [sym_condition_negation] = ACTIONS(17),
  },
  [2] = {
    [sym__end_of_line] = STATE(2),
    [sym_unary_condition_identifier] = STATE(34),
    [sym_binary_condition_identifier] = STATE(48),
    [sym_binary_condition_expression] = STATE(34),
    [sym_condition_expression] = STATE(32),
    [sym_conditions] = STATE(42),
    [sym_rule] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [sym__spaces] = ACTIONS(24),
    [aux_sym__end_of_line_token1] = ACTIONS(27),
    [anon_sym_X] = ACTIONS(30),
    [anon_sym_file] = ACTIONS(30),
    [anon_sym_directory] = ACTIONS(30),
    [anon_sym_terminal] = ACTIONS(30),
    [anon_sym_else] = ACTIONS(30),
    [anon_sym_match] = ACTIONS(33),
    [anon_sym_ext] = ACTIONS(33),
    [anon_sym_mime] = ACTIONS(33),
    [anon_sym_name] = ACTIONS(33),
    [anon_sym_path] = ACTIONS(33),
    [anon_sym_has] = ACTIONS(33),
    [anon_sym_env] = ACTIONS(33),
    [anon_sym_number] = ACTIONS(33),
    [anon_sym_flag] = ACTIONS(33),
    [anon_sym_label] = ACTIONS(33),
    [sym_condition_negation] = ACTIONS(36),
  },
  [3] = {
    [sym__end_of_line] = STATE(2),
    [sym_unary_condition_identifier] = STATE(34),
    [sym_binary_condition_identifier] = STATE(48),
    [sym_binary_condition_expression] = STATE(34),
    [sym_condition_expression] = STATE(32),
    [sym_conditions] = STATE(42),
    [sym_rule] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(7),
    [sym__spaces] = ACTIONS(9),
    [aux_sym__end_of_line_token1] = ACTIONS(41),
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
    [sym_condition_negation] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      sym_condition_negation,
    STATE(39), 1,
      sym_condition_expression,
    STATE(48), 1,
      sym_binary_condition_identifier,
    STATE(34), 2,
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
  [36] = 1,
    ACTIONS(19), 20,
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
      sym_condition_negation,
  [59] = 1,
    ACTIONS(43), 20,
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
      sym_condition_negation,
  [82] = 1,
    ACTIONS(45), 20,
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
      sym_condition_negation,
  [105] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    STATE(48), 1,
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
  [135] = 9,
    ACTIONS(49), 1,
      sym__spaces,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(58), 1,
      aux_sym_identifier_token3,
    ACTIONS(61), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(47), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    STATE(9), 2,
      sym_word,
      aux_sym_command_list_repeat1,
  [165] = 9,
    ACTIONS(66), 1,
      sym__spaces,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 1,
      aux_sym_identifier_token3,
    ACTIONS(74), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(64), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    STATE(9), 2,
      sym_word,
      aux_sym_command_list_repeat1,
  [195] = 9,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 1,
      aux_sym_identifier_token3,
    ACTIONS(74), 1,
      sym_string,
    ACTIONS(78), 1,
      sym__spaces,
    STATE(14), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(76), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    STATE(10), 2,
      sym_word,
      aux_sym_command_list_repeat1,
  [225] = 9,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 1,
      aux_sym_identifier_token3,
    ACTIONS(74), 1,
      sym_string,
    STATE(11), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_identifier_repeat2,
    STATE(17), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command_list,
  [253] = 5,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    STATE(13), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(80), 4,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      sym_string,
  [272] = 5,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(93), 1,
      aux_sym_identifier_token3,
    STATE(13), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(91), 4,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      sym_string,
  [291] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      aux_sym_identifier_token3,
    STATE(15), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [311] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      aux_sym_identifier_token3,
    STATE(15), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [331] = 2,
    ACTIONS(112), 1,
      aux_sym_identifier_token3,
    ACTIONS(110), 6,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
  [343] = 2,
    ACTIONS(116), 1,
      aux_sym_identifier_token3,
    ACTIONS(114), 6,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
  [355] = 2,
    ACTIONS(118), 1,
      aux_sym_identifier_token3,
    ACTIONS(80), 6,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
  [367] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    ACTIONS(120), 1,
      aux_sym_identifier_token3,
    STATE(16), 1,
      aux_sym_identifier_repeat2,
    STATE(40), 1,
      sym_identifier,
  [386] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(80), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [397] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(114), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [408] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      aux_sym_identifier_token2,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
  [424] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      aux_sym_identifier_token2,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
  [440] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      aux_sym_identifier_token2,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
  [456] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(139), 1,
      aux_sym_identifier_token2,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
  [472] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      aux_sym_identifier_token2,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
  [488] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__spaces,
    ACTIONS(146), 1,
      aux_sym__end_of_line_token1,
    STATE(5), 1,
      sym__end_of_line,
  [501] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_EQ,
    STATE(30), 1,
      aux_sym_conditions_repeat1,
  [514] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_EQ,
    STATE(30), 1,
      aux_sym_conditions_repeat1,
  [527] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(157), 1,
      aux_sym_identifier_token2,
    ACTIONS(142), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [538] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_EQ,
    STATE(29), 1,
      aux_sym_conditions_repeat1,
  [551] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__spaces,
    ACTIONS(161), 1,
      aux_sym__end_of_line_token1,
    STATE(35), 1,
      sym__end_of_line,
  [564] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [572] = 1,
    ACTIONS(165), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [578] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [586] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [594] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym__end_of_line_token1,
  [604] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [612] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [620] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(177), 1,
      aux_sym_identifier_token1,
  [627] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(179), 1,
      anon_sym_EQ,
  [634] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(181), 1,
      aux_sym_identifier_token1,
  [641] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(183), 1,
      aux_sym__end_of_line_token1,
  [648] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(173), 1,
      aux_sym__end_of_line_token1,
  [655] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [662] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(187), 1,
      aux_sym_identifier_token1,
  [669] = 1,
    ACTIONS(189), 1,
      sym__spaces,
  [673] = 1,
    ACTIONS(191), 1,
      sym__spaces,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 59,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 225,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 272,
  [SMALL_STATE(15)] = 291,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 331,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 386,
  [SMALL_STATE(22)] = 397,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 440,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 488,
  [SMALL_STATE(29)] = 501,
  [SMALL_STATE(30)] = 514,
  [SMALL_STATE(31)] = 527,
  [SMALL_STATE(32)] = 538,
  [SMALL_STATE(33)] = 551,
  [SMALL_STATE(34)] = 564,
  [SMALL_STATE(35)] = 572,
  [SMALL_STATE(36)] = 578,
  [SMALL_STATE(37)] = 586,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 604,
  [SMALL_STATE(40)] = 612,
  [SMALL_STATE(41)] = 620,
  [SMALL_STATE(42)] = 627,
  [SMALL_STATE(43)] = 634,
  [SMALL_STATE(44)] = 641,
  [SMALL_STATE(45)] = 648,
  [SMALL_STATE(46)] = 655,
  [SMALL_STATE(47)] = 662,
  [SMALL_STATE(48)] = 669,
  [SMALL_STATE(49)] = 673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(47),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(43),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_condition_identifier, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_expression, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_identifier, 1, 0, 0),
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
