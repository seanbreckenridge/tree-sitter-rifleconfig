#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 50
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
  anon_sym_BANG = 25,
  anon_sym_COMMA = 26,
  aux_sym_word_token1 = 27,
  anon_sym_SEMI = 28,
  anon_sym_ask = 29,
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
  aux_sym_conditions_repeat2 = 47,
  aux_sym_command_repeat1 = 48,
  aux_sym_command_list_repeat1 = 49,
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
  [anon_sym_BANG] = "condition_negation",
  [anon_sym_COMMA] = ",",
  [aux_sym_word_token1] = "string",
  [anon_sym_SEMI] = ";",
  [anon_sym_ask] = "ask",
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
  [aux_sym_conditions_repeat2] = "conditions_repeat2",
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ask] = anon_sym_ask,
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
  [aux_sym_conditions_repeat2] = aux_sym_conditions_repeat2,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask] = {
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
  [aux_sym_conditions_repeat2] = {
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
  [22] = 22,
  [23] = 19,
  [24] = 18,
  [25] = 25,
  [26] = 22,
  [27] = 20,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 29,
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
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ask);
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
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__end_of_line] = STATE(2),
    [sym_unary_condition_identifier] = STATE(40),
    [sym_binary_condition_identifier] = STATE(52),
    [sym_binary_condition_expression] = STATE(40),
    [sym_condition_expression] = STATE(35),
    [sym_conditions] = STATE(51),
    [sym_rule] = STATE(2),
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
    [anon_sym_BANG] = ACTIONS(17),
  },
  [2] = {
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(40),
    [sym_binary_condition_identifier] = STATE(52),
    [sym_binary_condition_expression] = STATE(40),
    [sym_condition_expression] = STATE(35),
    [sym_conditions] = STATE(51),
    [sym_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(7),
    [sym__spaces] = ACTIONS(9),
    [aux_sym__end_of_line_token1] = ACTIONS(21),
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
    [anon_sym_BANG] = ACTIONS(17),
  },
  [3] = {
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(40),
    [sym_binary_condition_identifier] = STATE(52),
    [sym_binary_condition_expression] = STATE(40),
    [sym_condition_expression] = STATE(35),
    [sym_conditions] = STATE(51),
    [sym_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym__spaces] = ACTIONS(28),
    [aux_sym__end_of_line_token1] = ACTIONS(31),
    [anon_sym_X] = ACTIONS(34),
    [anon_sym_file] = ACTIONS(34),
    [anon_sym_directory] = ACTIONS(34),
    [anon_sym_terminal] = ACTIONS(34),
    [anon_sym_else] = ACTIONS(34),
    [anon_sym_match] = ACTIONS(37),
    [anon_sym_ext] = ACTIONS(37),
    [anon_sym_mime] = ACTIONS(37),
    [anon_sym_name] = ACTIONS(37),
    [anon_sym_path] = ACTIONS(37),
    [anon_sym_has] = ACTIONS(37),
    [anon_sym_env] = ACTIONS(37),
    [anon_sym_number] = ACTIONS(37),
    [anon_sym_flag] = ACTIONS(37),
    [anon_sym_label] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(40),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_EQ,
    STATE(8), 1,
      aux_sym_conditions_repeat1,
    STATE(42), 1,
      sym_condition_expression,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(40), 2,
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
  [45] = 10,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_EQ,
    STATE(8), 1,
      aux_sym_conditions_repeat1,
    STATE(42), 1,
      sym_condition_expression,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(40), 2,
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
  [90] = 9,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_conditions_repeat1,
    STATE(42), 1,
      sym_condition_expression,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(40), 2,
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
  [132] = 1,
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
      anon_sym_BANG,
  [155] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(51), 17,
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
      anon_sym_BANG,
      anon_sym_EQ,
  [184] = 1,
    ACTIONS(56), 20,
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
      anon_sym_BANG,
  [207] = 1,
    ACTIONS(58), 20,
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
      anon_sym_BANG,
  [230] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    STATE(52), 1,
      sym_binary_condition_identifier,
    STATE(44), 2,
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
  [260] = 9,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(68), 1,
      aux_sym_identifier_token3,
    ACTIONS(70), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(60), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    ACTIONS(62), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(17), 2,
      sym_word,
      aux_sym_command_repeat1,
  [291] = 11,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(68), 1,
      aux_sym_identifier_token3,
    ACTIONS(70), 1,
      aux_sym_word_token1,
    ACTIONS(72), 1,
      anon_sym_ask,
    STATE(15), 1,
      sym_word,
    STATE(19), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    STATE(37), 1,
      sym_command_list,
    STATE(14), 2,
      sym_command,
      aux_sym_command_list_repeat1,
  [326] = 9,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(68), 1,
      aux_sym_identifier_token3,
    ACTIONS(70), 1,
      aux_sym_word_token1,
    STATE(15), 1,
      sym_word,
    STATE(19), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    STATE(16), 2,
      sym_command,
      aux_sym_command_list_repeat1,
    ACTIONS(74), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [357] = 9,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(68), 1,
      aux_sym_identifier_token3,
    ACTIONS(70), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(76), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    ACTIONS(78), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(12), 2,
      sym_word,
      aux_sym_command_repeat1,
  [388] = 9,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    ACTIONS(91), 1,
      aux_sym_word_token1,
    STATE(15), 1,
      sym_word,
    STATE(19), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    STATE(16), 2,
      sym_command,
      aux_sym_command_list_repeat1,
    ACTIONS(80), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [419] = 9,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      aux_sym_identifier_token3,
    ACTIONS(108), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      aux_sym_identifier_repeat2,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(94), 2,
      sym_comment,
      aux_sym__end_of_line_token1,
    ACTIONS(96), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(17), 2,
      sym_word,
      aux_sym_command_repeat1,
  [450] = 5,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(119), 1,
      aux_sym_identifier_token3,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(111), 5,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [470] = 5,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      aux_sym_identifier_token3,
    STATE(18), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(122), 5,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [490] = 2,
    ACTIONS(126), 1,
      aux_sym_identifier_token3,
    ACTIONS(111), 7,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [503] = 2,
    ACTIONS(130), 1,
      aux_sym_identifier_token3,
    ACTIONS(128), 7,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [516] = 2,
    ACTIONS(134), 1,
      aux_sym_identifier_token3,
    ACTIONS(132), 7,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [529] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(140), 1,
      aux_sym_identifier_token3,
    STATE(24), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [549] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_BSLASH,
    ACTIONS(148), 1,
      aux_sym_identifier_token3,
    STATE(24), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [569] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      aux_sym_identifier_token3,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(43), 1,
      sym_identifier,
  [588] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(132), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [599] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(111), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [610] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      aux_sym_conditions_repeat1,
    STATE(33), 1,
      aux_sym_conditions_repeat2,
  [626] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(157), 1,
      aux_sym_identifier_token2,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_identifier_repeat1,
  [642] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      aux_sym_identifier_token2,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
  [658] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      aux_sym_identifier_token2,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
  [674] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
  [690] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_EQ,
    STATE(6), 1,
      aux_sym_conditions_repeat1,
    STATE(33), 1,
      aux_sym_conditions_repeat2,
  [706] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      aux_sym_identifier_token2,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
  [722] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym_conditions_repeat1,
    STATE(28), 1,
      aux_sym_conditions_repeat2,
  [738] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(188), 1,
      aux_sym_identifier_token2,
    ACTIONS(173), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [749] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__spaces,
    ACTIONS(190), 1,
      aux_sym__end_of_line_token1,
    STATE(7), 1,
      sym__end_of_line,
  [762] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [770] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(194), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym__end_of_line_token1,
  [780] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [788] = 1,
    ACTIONS(74), 3,
      sym_comment,
      sym__spaces,
      aux_sym__end_of_line_token1,
  [794] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [802] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [810] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [818] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(204), 1,
      aux_sym_identifier_token1,
  [825] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [832] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(196), 1,
      aux_sym__end_of_line_token1,
  [839] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(208), 1,
      aux_sym_identifier_token1,
  [846] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(210), 1,
      aux_sym__end_of_line_token1,
  [853] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
  [860] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(214), 1,
      anon_sym_EQ,
  [867] = 1,
    ACTIONS(216), 1,
      sym__spaces,
  [871] = 1,
    ACTIONS(218), 1,
      sym__spaces,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 230,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 419,
  [SMALL_STATE(18)] = 450,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 490,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 516,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 549,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 588,
  [SMALL_STATE(27)] = 599,
  [SMALL_STATE(28)] = 610,
  [SMALL_STATE(29)] = 626,
  [SMALL_STATE(30)] = 642,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 674,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 706,
  [SMALL_STATE(35)] = 722,
  [SMALL_STATE(36)] = 738,
  [SMALL_STATE(37)] = 749,
  [SMALL_STATE(38)] = 762,
  [SMALL_STATE(39)] = 770,
  [SMALL_STATE(40)] = 780,
  [SMALL_STATE(41)] = 788,
  [SMALL_STATE(42)] = 794,
  [SMALL_STATE(43)] = 802,
  [SMALL_STATE(44)] = 810,
  [SMALL_STATE(45)] = 818,
  [SMALL_STATE(46)] = 825,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 839,
  [SMALL_STATE(49)] = 846,
  [SMALL_STATE(50)] = 853,
  [SMALL_STATE(51)] = 860,
  [SMALL_STATE(52)] = 867,
  [SMALL_STATE(53)] = 871,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(29),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat2, 2, 0, 0), SHIFT_REPEAT(6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat2, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_condition_identifier, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_expression, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_identifier, 1, 0, 0),
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
