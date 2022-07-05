#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_bundle = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_todo = 7,
  anon_sym_body = 8,
  sym_identifier = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_block = 12,
  sym_bundle = 13,
  sym_argument_list = 14,
  sym_bundle_body = 15,
  sym_bundle_statement = 16,
  sym_body = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_argument_list_repeat1 = 19,
  aux_sym_bundle_body_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bundle] = "bundle",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_todo] = "todo",
  [anon_sym_body] = "body",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_bundle] = "bundle",
  [sym_argument_list] = "argument_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_statement] = "bundle_statement",
  [sym_body] = "body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bundle] = anon_sym_bundle,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_body] = anon_sym_body,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_bundle] = sym_bundle,
  [sym_argument_list] = sym_argument_list,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_statement] = sym_bundle_statement,
  [sym_body] = sym_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
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
  [anon_sym_todo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_body] = {
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
};

enum {
  field_body_id = 1,
  field_body_type = 2,
  field_bundle_id = 3,
  field_bundle_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body_id] = "body_id",
  [field_body_type] = "body_type",
  [field_bundle_id] = "bundle_id",
  [field_bundle_type] = "bundle_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body_id, 2},
    {field_body_type, 1},
  [2] =
    {field_bundle_id, 2},
    {field_bundle_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_bundle);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
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
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_block] = STATE(2),
    [sym_bundle] = STATE(8),
    [sym_body] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_bundle] = ACTIONS(7),
    [anon_sym_body] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_bundle,
    ACTIONS(9), 1,
      anon_sym_body,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(8), 2,
      sym_bundle,
      sym_body,
  [21] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_bundle,
    ACTIONS(18), 1,
      anon_sym_body,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(8), 2,
      sym_bundle,
      sym_body,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_bundle_body,
    STATE(18), 1,
      sym_argument_list,
  [58] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_todo,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [72] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_todo,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [86] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_todo,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_argument_list_repeat1,
  [131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_argument_list_repeat1,
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
  [187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      sym_identifier,
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_bundle_body,
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      sym_identifier,
  [217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_argument_list_repeat1,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_RBRACE,
      anon_sym_todo,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
  [252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
  [266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_identifier,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
  [280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_identifier,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COMMA,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 217,
  [SMALL_STATE(21)] = 227,
  [SMALL_STATE(22)] = 237,
  [SMALL_STATE(23)] = 245,
  [SMALL_STATE(24)] = 252,
  [SMALL_STATE(25)] = 259,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 273,
  [SMALL_STATE(28)] = 280,
  [SMALL_STATE(29)] = 287,
  [SMALL_STATE(30)] = 294,
  [SMALL_STATE(31)] = 301,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 315,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 4, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 5, .production_id = 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
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
