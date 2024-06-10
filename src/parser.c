#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__spaces = 2,
  sym__linebreak = 3,
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
  aux_sym_conditions_repeat3 = 48,
  aux_sym_command_repeat1 = 49,
  aux_sym_command_list_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__spaces] = "_spaces",
  [sym__linebreak] = "_linebreak",
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
  [aux_sym_conditions_repeat3] = "conditions_repeat3",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_list_repeat1] = "command_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__spaces] = sym__spaces,
  [sym__linebreak] = sym__linebreak,
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
  [aux_sym_conditions_repeat3] = aux_sym_conditions_repeat3,
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
  [sym__linebreak] = {
    .visible = false,
    .named = true,
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
  [aux_sym_conditions_repeat3] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 22,
  [28] = 23,
  [29] = 29,
  [30] = 24,
  [31] = 25,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 52,
  [58] = 58,
  [59] = 59,
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
      ACCEPT_TOKEN(sym__linebreak);
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
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 56},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
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
    [sym_source_file] = STATE(51),
    [sym__end_of_line] = STATE(3),
    [sym_unary_condition_identifier] = STATE(44),
    [sym_binary_condition_identifier] = STATE(59),
    [sym_binary_condition_expression] = STATE(44),
    [sym_condition_expression] = STATE(40),
    [sym_conditions] = STATE(55),
    [sym_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_conditions_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__spaces] = ACTIONS(9),
    [sym__linebreak] = ACTIONS(11),
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
    [anon_sym_COMMA] = ACTIONS(19),
  },
  [2] = {
    [sym__end_of_line] = STATE(2),
    [sym_unary_condition_identifier] = STATE(44),
    [sym_binary_condition_identifier] = STATE(59),
    [sym_binary_condition_expression] = STATE(44),
    [sym_condition_expression] = STATE(40),
    [sym_conditions] = STATE(55),
    [sym_rule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_conditions_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym__spaces] = ACTIONS(26),
    [sym__linebreak] = ACTIONS(29),
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
    [anon_sym_BANG] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(41),
  },
  [3] = {
    [sym__end_of_line] = STATE(2),
    [sym_unary_condition_identifier] = STATE(44),
    [sym_binary_condition_identifier] = STATE(59),
    [sym_binary_condition_expression] = STATE(44),
    [sym_condition_expression] = STATE(40),
    [sym_conditions] = STATE(55),
    [sym_rule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_conditions_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(7),
    [sym__spaces] = ACTIONS(9),
    [sym__linebreak] = ACTIONS(46),
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
    [anon_sym_COMMA] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_EQ,
    STATE(13), 1,
      aux_sym_conditions_repeat2,
    STATE(49), 1,
      sym_condition_expression,
    STATE(59), 1,
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
  [45] = 10,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_EQ,
    STATE(13), 1,
      aux_sym_conditions_repeat2,
    STATE(49), 1,
      sym_condition_expression,
    STATE(59), 1,
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
  [90] = 10,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_EQ,
    STATE(13), 1,
      aux_sym_conditions_repeat2,
    STATE(49), 1,
      sym_condition_expression,
    STATE(59), 1,
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
  [135] = 9,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_conditions_repeat2,
    STATE(49), 1,
      sym_condition_expression,
    STATE(59), 1,
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
  [177] = 8,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(14), 1,
      aux_sym_conditions_repeat1,
    STATE(32), 1,
      sym_condition_expression,
    STATE(59), 1,
      sym_binary_condition_identifier,
    ACTIONS(56), 2,
      sym__spaces,
      anon_sym_COMMA,
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
  [217] = 1,
    ACTIONS(58), 21,
      ts_builtin_sym_end,
      sym_comment,
      sym__spaces,
      sym__linebreak,
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
      anon_sym_COMMA,
  [241] = 1,
    ACTIONS(60), 21,
      ts_builtin_sym_end,
      sym_comment,
      sym__spaces,
      sym__linebreak,
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
      anon_sym_COMMA,
  [265] = 1,
    ACTIONS(62), 21,
      ts_builtin_sym_end,
      sym_comment,
      sym__spaces,
      sym__linebreak,
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
      anon_sym_COMMA,
  [289] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym__linebreak,
    ACTIONS(66), 18,
      sym__spaces,
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
      anon_sym_COMMA,
  [316] = 4,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_conditions_repeat2,
    ACTIONS(70), 17,
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
  [345] = 3,
    STATE(14), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(75), 2,
      sym__spaces,
      anon_sym_COMMA,
    ACTIONS(78), 16,
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
  [371] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    STATE(59), 1,
      sym_binary_condition_identifier,
    STATE(47), 2,
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
  [401] = 9,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    ACTIONS(90), 1,
      aux_sym_word_token1,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(80), 2,
      sym_comment,
      sym__linebreak,
    ACTIONS(82), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(18), 2,
      sym_word,
      aux_sym_command_repeat1,
  [432] = 9,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_BSLASH,
    ACTIONS(100), 1,
      aux_sym_identifier_token3,
    ACTIONS(103), 1,
      aux_sym_word_token1,
    STATE(20), 1,
      sym_word,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(26), 1,
      sym_identifier,
    STATE(17), 2,
      sym_command,
      aux_sym_command_list_repeat1,
    ACTIONS(92), 3,
      sym_comment,
      sym__spaces,
      sym__linebreak,
  [463] = 9,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      aux_sym_identifier_token3,
    ACTIONS(120), 1,
      aux_sym_word_token1,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(106), 2,
      sym_comment,
      sym__linebreak,
    ACTIONS(108), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(18), 2,
      sym_word,
      aux_sym_command_repeat1,
  [494] = 9,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    ACTIONS(90), 1,
      aux_sym_word_token1,
    STATE(20), 1,
      sym_word,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(26), 1,
      sym_identifier,
    STATE(17), 2,
      sym_command,
      aux_sym_command_list_repeat1,
    ACTIONS(123), 3,
      sym_comment,
      sym__spaces,
      sym__linebreak,
  [525] = 9,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    ACTIONS(90), 1,
      aux_sym_word_token1,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(125), 2,
      sym_comment,
      sym__linebreak,
    ACTIONS(127), 2,
      sym__spaces,
      anon_sym_SEMI,
    STATE(16), 2,
      sym_word,
      aux_sym_command_repeat1,
  [556] = 11,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      aux_sym_identifier_token3,
    ACTIONS(90), 1,
      aux_sym_word_token1,
    ACTIONS(129), 1,
      anon_sym_ask,
    STATE(20), 1,
      sym_word,
    STATE(23), 1,
      aux_sym_identifier_repeat2,
    STATE(26), 1,
      sym_identifier,
    STATE(43), 1,
      sym_command_list,
    STATE(19), 2,
      sym_command,
      aux_sym_command_list_repeat1,
  [591] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(139), 1,
      aux_sym_identifier_token3,
    STATE(22), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(131), 5,
      sym_comment,
      sym__spaces,
      sym__linebreak,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [611] = 5,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(144), 1,
      aux_sym_identifier_token3,
    STATE(22), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(142), 5,
      sym_comment,
      sym__spaces,
      sym__linebreak,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [631] = 2,
    ACTIONS(148), 1,
      aux_sym_identifier_token3,
    ACTIONS(146), 7,
      sym_comment,
      sym__spaces,
      sym__linebreak,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [644] = 2,
    ACTIONS(150), 1,
      aux_sym_identifier_token3,
    ACTIONS(131), 7,
      sym_comment,
      sym__spaces,
      sym__linebreak,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [657] = 2,
    ACTIONS(154), 1,
      aux_sym_identifier_token3,
    ACTIONS(152), 7,
      sym_comment,
      sym__spaces,
      sym__linebreak,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_word_token1,
      anon_sym_SEMI,
  [670] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      aux_sym_identifier_token3,
    STATE(27), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [690] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      aux_sym_identifier_token3,
    STATE(27), 1,
      aux_sym_identifier_repeat2,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [710] = 6,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      aux_sym_identifier_token3,
    STATE(28), 1,
      aux_sym_identifier_repeat2,
    STATE(50), 1,
      sym_identifier,
  [729] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(146), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [740] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(131), 5,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      aux_sym_identifier_token3,
      anon_sym_COMMA,
      anon_sym_EQ,
  [751] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_conditions_repeat2,
    STATE(39), 1,
      aux_sym_conditions_repeat3,
  [767] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      aux_sym_identifier_token2,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
  [783] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      aux_sym_identifier_token2,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_identifier_repeat1,
  [799] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      aux_sym_identifier_token2,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
  [815] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_EQ,
    STATE(7), 1,
      aux_sym_conditions_repeat2,
    STATE(36), 1,
      aux_sym_conditions_repeat3,
  [831] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(194), 1,
      anon_sym_BSLASH,
    ACTIONS(197), 1,
      aux_sym_identifier_token2,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_identifier_repeat1,
  [847] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_conditions_repeat2,
    STATE(36), 1,
      aux_sym_conditions_repeat3,
  [863] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(52), 1,
      anon_sym_EQ,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      aux_sym_conditions_repeat2,
    STATE(36), 1,
      aux_sym_conditions_repeat3,
  [879] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_EQ,
    STATE(6), 1,
      aux_sym_conditions_repeat2,
    STATE(38), 1,
      aux_sym_conditions_repeat3,
  [895] = 5,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      aux_sym_identifier_token2,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_identifier_repeat1,
  [911] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(210), 1,
      aux_sym_identifier_token2,
    ACTIONS(200), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [922] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__spaces,
    ACTIONS(214), 1,
      sym__linebreak,
    STATE(9), 1,
      sym__end_of_line,
  [935] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [943] = 3,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym__linebreak,
  [953] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [961] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [969] = 1,
    ACTIONS(123), 3,
      sym_comment,
      sym__spaces,
      sym__linebreak,
  [975] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [983] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [991] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [998] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(226), 1,
      aux_sym_identifier_token1,
  [1005] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(228), 1,
      aux_sym_identifier_token1,
  [1012] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(230), 1,
      sym__linebreak,
  [1019] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(232), 1,
      anon_sym_EQ,
  [1026] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(68), 1,
      sym__linebreak,
  [1033] = 2,
    ACTIONS(3), 1,
      sym__spaces,
    ACTIONS(234), 1,
      aux_sym_identifier_token1,
  [1040] = 1,
    ACTIONS(236), 1,
      sym__spaces,
  [1044] = 1,
    ACTIONS(238), 1,
      sym__spaces,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 217,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 316,
  [SMALL_STATE(14)] = 345,
  [SMALL_STATE(15)] = 371,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 432,
  [SMALL_STATE(18)] = 463,
  [SMALL_STATE(19)] = 494,
  [SMALL_STATE(20)] = 525,
  [SMALL_STATE(21)] = 556,
  [SMALL_STATE(22)] = 591,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 631,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 690,
  [SMALL_STATE(29)] = 710,
  [SMALL_STATE(30)] = 729,
  [SMALL_STATE(31)] = 740,
  [SMALL_STATE(32)] = 751,
  [SMALL_STATE(33)] = 767,
  [SMALL_STATE(34)] = 783,
  [SMALL_STATE(35)] = 799,
  [SMALL_STATE(36)] = 815,
  [SMALL_STATE(37)] = 831,
  [SMALL_STATE(38)] = 847,
  [SMALL_STATE(39)] = 863,
  [SMALL_STATE(40)] = 879,
  [SMALL_STATE(41)] = 895,
  [SMALL_STATE(42)] = 911,
  [SMALL_STATE(43)] = 922,
  [SMALL_STATE(44)] = 935,
  [SMALL_STATE(45)] = 943,
  [SMALL_STATE(46)] = 953,
  [SMALL_STATE(47)] = 961,
  [SMALL_STATE(48)] = 969,
  [SMALL_STATE(49)] = 975,
  [SMALL_STATE(50)] = 983,
  [SMALL_STATE(51)] = 991,
  [SMALL_STATE(52)] = 998,
  [SMALL_STATE(53)] = 1005,
  [SMALL_STATE(54)] = 1012,
  [SMALL_STATE(55)] = 1019,
  [SMALL_STATE(56)] = 1026,
  [SMALL_STATE(57)] = 1033,
  [SMALL_STATE(58)] = 1040,
  [SMALL_STATE(59)] = 1044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_of_line, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat2, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat2, 2, 0, 0), SHIFT_REPEAT(13),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_list_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_list, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(35),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat3, 2, 0, 0), SHIFT_REPEAT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat3, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_condition_identifier, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expression, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_expression, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition_identifier, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
