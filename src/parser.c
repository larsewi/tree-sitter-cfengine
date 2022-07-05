#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

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
  sym_source_file = 14,
  sym_block = 15,
  sym_bundle = 16,
  sym_argument_list = 17,
  sym_bundle_body = 18,
  sym_bundle_statement = 19,
  sym_right_value = 20,
  sym_promise_line = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_argument_list_repeat1 = 23,
  aux_sym_bundle_body_repeat1 = 24,
  aux_sym_bundle_statement_repeat1 = 25,
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
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_bundle] = "bundle",
  [sym_argument_list] = "argument_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_statement] = "bundle_statement",
  [sym_right_value] = "right_value",
  [sym_promise_line] = "promise_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_statement_repeat1] = "bundle_statement_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
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
};

enum {
  field_bundle_id = 1,
  field_bundle_type = 2,
  field_promisee = 3,
  field_promiser = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bundle_id] = "bundle_id",
  [field_bundle_type] = "bundle_type",
  [field_promisee] = "promisee",
  [field_promiser] = "promiser",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bundle_id, 2},
    {field_bundle_type, 1},
  [2] =
    {field_promiser, 0},
  [3] =
    {field_promisee, 2},
    {field_promiser, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(32);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(28);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_bundle);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(32);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(32);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_block] = STATE(4),
    [sym_bundle] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_bundle] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
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
  [22] = 7,
    ACTIONS(3), 1,
      sym_comment,
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
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_bundle,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_bundle,
    STATE(5), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [61] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_bundle,
    STATE(21), 1,
      sym_bundle,
    STATE(5), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [78] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym_promise_guard,
    STATE(11), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_promise_guard,
    ACTIONS(38), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      sym_promise_guard,
    ACTIONS(9), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_argument_list,
    STATE(28), 1,
      sym_bundle_body,
  [132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_promise_guard,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      sym_promise_guard,
    STATE(11), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      sym_class_guard,
    STATE(3), 1,
      aux_sym_bundle_statement_repeat1,
    STATE(33), 1,
      sym_promise_line,
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      sym_right_value,
    ACTIONS(53), 2,
      sym_quoted_string,
      sym_identifier,
  [187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      sym_identifier,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_argument_list_repeat1,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_COMMA,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_argument_list_repeat1,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_DASH_GT,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_quoted_string,
    STATE(34), 1,
      sym_promise_line,
  [302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_bundle_body,
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
  [337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_identifier,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
  [358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SEMI,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
  [379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 238,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 262,
  [SMALL_STATE(23)] = 272,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 292,
  [SMALL_STATE(26)] = 302,
  [SMALL_STATE(27)] = 312,
  [SMALL_STATE(28)] = 322,
  [SMALL_STATE(29)] = 330,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 344,
  [SMALL_STATE(32)] = 351,
  [SMALL_STATE(33)] = 358,
  [SMALL_STATE(34)] = 365,
  [SMALL_STATE(35)] = 372,
  [SMALL_STATE(36)] = 379,
  [SMALL_STATE(37)] = 386,
  [SMALL_STATE(38)] = 393,
  [SMALL_STATE(39)] = 400,
  [SMALL_STATE(40)] = 407,
  [SMALL_STATE(41)] = 414,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_statement_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 2), SHIFT_REPEAT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_statement, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_statement_repeat1, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_statement_repeat1, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 5, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(32),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 1, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 4, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_value, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
