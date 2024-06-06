#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_SEMI = 28,
  sym_ask = 29,
  anon_sym_EQ = 30,
  sym_source_file = 31,
  sym__end_of_line = 32,
  sym_unary_condition_identifier = 33,
  sym_binary_condition_identifier = 34,
  sym_identifier = 35,
  sym_binary_condition_expression = 36,
  sym_condition_expression = 37,
  sym_conditions = 38,
  sym_word = 39,
  sym_command = 40,
  sym_command_list = 41,
  sym_rule = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_identifier_repeat1 = 44,
  aux_sym_identifier_repeat2 = 45,
  aux_sym_conditions_repeat1 = 46,
  aux_sym_command_repeat1 = 47,
  aux_sym_command_list_repeat1 = 48,
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
  [anon_sym_SEMI] = ";",
  [sym_ask] = "ask",
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
  [sym_command] = "command",
  [sym_command_list] = "command_list",
  [sym_rule] = "rule",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_identifier_repeat2] = "identifier_repeat2",
  [aux_sym_conditions_repeat1] = "conditions_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_ask] = sym_ask,
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
  [sym_command] = sym_command,
  [sym_command_list] = sym_command_list,
  [sym_rule] = sym_rule,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_identifier_repeat2] = aux_sym_identifier_repeat2,
  [aux_sym_conditions_repeat1] = aux_sym_conditions_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_ask] = {
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
  [sym_command] = {
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
  [aux_sym_command_repeat1] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 17,
  [24] = 24,
  [25] = 19,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 27,
  [31] = 29,
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 47,
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '!', 85,
        '#', 59,
        ',', 86,
        ';', 88,
        '=', 90,
        'X', 62,
        '[', 77,
        '\\', 78,
        ']', 81,
        '\t', 60,
        ' ', 60,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 61,
        '\r', 1,
        '"', 83,
        '#', 59,
        ';', 88,
        '[', 77,
        '\\', 78,
        '\t', 60,
        ' ', 60,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(82);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 61,
        '\r', 1,
        '"', 83,
        '#', 59,
        '[', 77,
        '\\', 78,
        '\t', 60,
        ' ', 60,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '\n', 61,
        '\r', 1,
        '!', 85,
        '#', 59,
        ',', 86,
        '=', 90,
        'X', 62,
        'd', 30,
        'e', 34,
        'f', 31,
        'h', 10,
        'l', 8,
        'm', 11,
        'n', 14,
        'p', 12,
        't', 23,
        '\t', 60,
        ' ', 60,
      );
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__spaces);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__end_of_line_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_directory);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_terminal);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mime);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_condition_negation);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ask);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(43),
    [sym_binary_condition_identifier] = STATE(52),
    [sym_binary_condition_expression] = STATE(43),
    [sym_condition_expression] = STATE(36),
    [sym_conditions] = STATE(49),
    [sym_rule] = STATE(3),
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
    [sym_unary_condition_identifier] = STATE(43),
    [sym_binary_condition_identifier] = STATE(52),
    [sym_binary_condition_expression] = STATE(43),
    [sym_condition_expression] = STATE(36),
    [sym_conditions] = STATE(49),
    [sym_rule] = STATE(2),
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
    [sym_unary_condition_identifier] = STATE(43),
    [sym_binary_condition_identifier] = STATE(52),
    [sym_binary_condition_expression] = STATE(43),
    [sym_condition_expression] = STATE(36),
    [sym_conditions] = STATE(49),
    [sym_rule] = STATE(2),
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
  [0] = 8,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      sym_condition_negation,
    ACTIONS(43), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_condition_expression,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(43), 2,
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
  [39] = 8,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      sym_condition_negation,
    ACTIONS(45), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_condition_expression,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(43), 2,
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
  [78] = 7,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      sym_condition_negation,
    STATE(40), 1,
      sym_condition_expression,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(43), 2,
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
  [114] = 1,
    ACTIONS(47), 20,
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
  [137] = 1,
    ACTIONS(49), 20,
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
  [160] = 1,
    ACTIONS(51), 20,
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
  [183] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(42), 2,
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
  [213] = 9,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      aux_sym_identifier_token3,
    ACTIONS(63), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(53), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    ACTIONS(55), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(12), 2,
      sym_word,
      aux_sym_command_repeat1,
  [244] = 9,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      aux_sym_identifier_token3,
    ACTIONS(79), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(65), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    ACTIONS(67), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(12), 2,
      sym_word,
      aux_sym_command_repeat1,
  [275] = 11,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      aux_sym_identifier_token3,
    ACTIONS(63), 1,
      sym_string,
    ACTIONS(82), 1,
      sym_ask,
    STATE(16), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command_list,
    STATE(15), 2,
      sym_command,
      aux_sym_command_list_repeat1,
  [310] = 9,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(92), 1,
      aux_sym_identifier_token3,
    ACTIONS(95), 1,
      sym_string,
    STATE(16), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    STATE(14), 2,
      sym_command,
      aux_sym_command_list_repeat1,
    ACTIONS(84), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [341] = 9,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      aux_sym_identifier_token3,
    ACTIONS(63), 1,
      sym_string,
    STATE(16), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    STATE(14), 2,
      sym_command,
      aux_sym_command_list_repeat1,
    ACTIONS(98), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [372] = 9,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      aux_sym_identifier_token3,
    ACTIONS(63), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(100), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    ACTIONS(102), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(11), 2,
      sym_word,
      aux_sym_command_repeat1,
  [403] = 5,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(112), 1,
      aux_sym_identifier_token3,
    STATE(17), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(104), 5,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      sym_string,
      anon_sym_SEMI,
  [423] = 5,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      aux_sym_identifier_token3,
    STATE(17), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(115), 5,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      sym_string,
      anon_sym_SEMI,
  [443] = 2,
    ACTIONS(121), 1,
      aux_sym_identifier_token3,
    ACTIONS(119), 7,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
      anon_sym_SEMI,
  [456] = 2,
    ACTIONS(123), 1,
      aux_sym_identifier_token3,
    ACTIONS(104), 7,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
      anon_sym_SEMI,
  [469] = 2,
    ACTIONS(127), 1,
      aux_sym_identifier_token3,
    ACTIONS(125), 7,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      sym_string,
      anon_sym_SEMI,
  [482] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      aux_sym_identifier_token3,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [502] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      aux_sym_identifier_token3,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [522] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(144), 1,
      aux_sym_identifier_token3,
    STATE(22), 1,
      aux_sym_identifier_repeat2,
    STATE(41), 1,
      sym_identifier,
  [541] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(119), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [552] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(104), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [563] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
    ACTIONS(148), 1,
      aux_sym_identifier_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
  [579] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
  [595] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
    ACTIONS(160), 1,
      aux_sym_identifier_token2,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
  [611] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
    ACTIONS(164), 1,
      aux_sym_identifier_token2,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
  [627] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
    ACTIONS(160), 1,
      aux_sym_identifier_token2,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
  [643] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_conditions_repeat1,
  [656] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__spaces,
    ACTIONS(172), 1,
      aux_sym__end_of_line_token1,
    STATE(7), 1,
      sym__end_of_line,
  [669] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_EQ,
    STATE(34), 1,
      aux_sym_conditions_repeat1,
  [682] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(179), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [693] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym_conditions_repeat1,
  [706] = 1,
    ACTIONS(98), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [712] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [720] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym__end_of_line_token1,
  [730] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [738] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [746] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [754] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [762] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(197), 1,
      aux_sym_identifier_token1,
  [769] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [776] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(189), 1,
      aux_sym__end_of_line_token1,
  [783] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
  [790] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(203), 1,
      aux_sym__end_of_line_token1,
  [797] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(205), 1,
      anon_sym_EQ,
  [804] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(207), 1,
      aux_sym_identifier_token1,
  [811] = 1,
    ACTIONS(209), 1,
      sym__spaces,
  [815] = 1,
    ACTIONS(211), 1,
      sym__spaces,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 341,
  [SMALL_STATE(16)] = 372,
  [SMALL_STATE(17)] = 403,
  [SMALL_STATE(18)] = 423,
  [SMALL_STATE(19)] = 443,
  [SMALL_STATE(20)] = 456,
  [SMALL_STATE(21)] = 469,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 502,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 541,
  [SMALL_STATE(26)] = 552,
  [SMALL_STATE(27)] = 563,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 595,
  [SMALL_STATE(30)] = 611,
  [SMALL_STATE(31)] = 627,
  [SMALL_STATE(32)] = 643,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 682,
  [SMALL_STATE(36)] = 693,
  [SMALL_STATE(37)] = 706,
  [SMALL_STATE(38)] = 712,
  [SMALL_STATE(39)] = 720,
  [SMALL_STATE(40)] = 730,
  [SMALL_STATE(41)] = 738,
  [SMALL_STATE(42)] = 746,
  [SMALL_STATE(43)] = 754,
  [SMALL_STATE(44)] = 762,
  [SMALL_STATE(45)] = 769,
  [SMALL_STATE(46)] = 776,
  [SMALL_STATE(47)] = 783,
  [SMALL_STATE(48)] = 790,
  [SMALL_STATE(49)] = 797,
  [SMALL_STATE(50)] = 804,
  [SMALL_STATE(51)] = 811,
  [SMALL_STATE(52)] = 815,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(47),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_condition_identifier, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_expression, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_identifier, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
