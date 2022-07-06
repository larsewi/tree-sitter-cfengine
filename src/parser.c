#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 4
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_bundle = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  anon_sym_DASH_GT = 8,
  sym_quoted_string = 9,
  sym_identifier = 10,
  sym_promise_guard = 11,
  sym_class_guard = 12,
  sym_comment = 13,
  sym_macro = 14,
  sym_source_file = 15,
  sym__block = 16,
  sym_bundle = 17,
  sym_argument_list = 18,
  sym_bundle_body = 19,
  sym_bundle_statement = 20,
  sym_right_value = 21,
  sym_promise_line = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_argument_list_repeat1 = 24,
  aux_sym_bundle_body_repeat1 = 25,
  aux_sym_bundle_statement_repeat1 = 26,
  alias_sym_argument = 27,
  alias_sym_bundle_id = 28,
  alias_sym_bundle_type = 29,
  alias_sym_promiser = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bundle] = "bundle",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "->",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "identifier",
  [sym_promise_guard] = "promise_guard",
  [sym_class_guard] = "class_guard",
  [sym_comment] = "comment",
  [sym_macro] = "macro",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_bundle] = "bundle",
  [sym_argument_list] = "argument_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_statement] = "bundle_statement",
  [sym_right_value] = "promisee",
  [sym_promise_line] = "promise_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_statement_repeat1] = "bundle_statement_repeat1",
  [alias_sym_argument] = "argument",
  [alias_sym_bundle_id] = "bundle_id",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_promiser] = "promiser",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bundle] = anon_sym_bundle,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [sym_promise_guard] = sym_promise_guard,
  [sym_class_guard] = sym_class_guard,
  [sym_comment] = sym_comment,
  [sym_macro] = sym_macro,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_bundle] = sym_bundle,
  [sym_argument_list] = sym_argument_list,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_statement] = sym_bundle_statement,
  [sym_right_value] = sym_right_value,
  [sym_promise_line] = sym_promise_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_statement_repeat1] = aux_sym_bundle_statement_repeat1,
  [alias_sym_argument] = alias_sym_argument,
  [alias_sym_bundle_id] = alias_sym_bundle_id,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_promiser] = alias_sym_promiser,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_bundle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_class_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_bundle] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_right_value] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_promiser] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_bundle_type,
    [2] = alias_sym_bundle_id,
  },
  [2] = {
    [0] = alias_sym_argument,
  },
  [3] = {
    [1] = alias_sym_argument,
  },
  [4] = {
    [0] = alias_sym_promiser,
  },
  [5] = {
    [2] = alias_sym_argument,
  },
  [6] = {
    [1] = alias_sym_promiser,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_class_guard_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '&'
      ? (c < ' '
        ? c == '\t'
        : c <= '!')
      : (c <= '&' || (c < '.'
        ? (c >= '(' && c <= ')')
        : c <= '.')))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ',') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(128);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(128);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == ')') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == ')') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == ')') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == ')') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(126);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(43);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == '`') ADVANCE(122);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(1);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 112:
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_bundle);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(126);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(126);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_bundle] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__block] = STATE(4),
    [sym_bundle] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_bundle] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_quoted_string,
    ACTIONS(14), 1,
      sym_promise_guard,
    ACTIONS(16), 1,
      sym_class_guard,
    STATE(2), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [23] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(23), 1,
      sym_promise_guard,
    ACTIONS(25), 1,
      sym_class_guard,
    STATE(2), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [46] = 4,
    ACTIONS(7), 1,
      anon_sym_bundle,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(5), 3,
      sym__block,
      sym_bundle,
      aux_sym_source_file_repeat1,
  [62] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_bundle,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(5), 3,
      sym__block,
      sym_bundle,
      aux_sym_source_file_repeat1,
  [78] = 4,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [93] = 3,
    ACTIONS(14), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(9), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [106] = 5,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_argument_list,
    STATE(25), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [123] = 4,
    ACTIONS(36), 1,
      sym_promise_guard,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [138] = 4,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(10), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [153] = 5,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      sym_class_guard,
    STATE(3), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [170] = 3,
    STATE(42), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(49), 2,
      sym_quoted_string,
      sym_identifier,
  [182] = 4,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [196] = 3,
    STATE(40), 1,
      sym_right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(49), 2,
      sym_quoted_string,
      sym_identifier,
  [208] = 3,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [219] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [230] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [239] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [248] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [259] = 3,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [270] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [281] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [292] = 3,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [303] = 3,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [314] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [323] = 3,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [334] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [343] = 2,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [351] = 2,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [359] = 2,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [367] = 2,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [375] = 2,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [383] = 2,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [391] = 2,
    ACTIONS(102), 1,
      sym_quoted_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [399] = 2,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [407] = 2,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [415] = 2,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [423] = 2,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [431] = 2,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [439] = 2,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [447] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [455] = 2,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 281,
  [SMALL_STATE(23)] = 292,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 314,
  [SMALL_STATE(26)] = 323,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 367,
  [SMALL_STATE(32)] = 375,
  [SMALL_STATE(33)] = 383,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 399,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 415,
  [SMALL_STATE(38)] = 423,
  [SMALL_STATE(39)] = 431,
  [SMALL_STATE(40)] = 439,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2), SHIFT_REPEAT(23),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_statement_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2), SHIFT_REPEAT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_statement, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 5, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 1, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 2, .production_id = 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, .production_id = 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_value, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 3, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 4, .production_id = 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_CFEngine(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
