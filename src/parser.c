#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_bundle = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_todo = 4,
  anon_sym_body = 5,
  sym_identifier = 6,
  sym_source_file = 7,
  sym_block = 8,
  sym_bundle = 9,
  sym_bundle_body = 10,
  sym_bundle_statement = 11,
  sym_body = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_bundle_body_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bundle] = "bundle",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_todo] = "todo",
  [anon_sym_body] = "body",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_bundle] = "bundle",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_statement] = "bundle_statement",
  [sym_body] = "body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bundle] = anon_sym_bundle,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_body] = anon_sym_body,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_bundle] = sym_bundle,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_statement] = sym_bundle_statement,
  [sym_body] = sym_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_bundle);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_bundle] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_block] = STATE(2),
    [sym_bundle] = STATE(7),
    [sym_body] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_bundle] = ACTIONS(5),
    [anon_sym_body] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_bundle,
    ACTIONS(7), 1,
      anon_sym_body,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(7), 2,
      sym_bundle,
      sym_body,
  [18] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_bundle,
    ACTIONS(16), 1,
      anon_sym_body,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    STATE(7), 2,
      sym_bundle,
      sym_body,
  [36] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_todo,
    STATE(5), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [47] = 3,
    ACTIONS(21), 1,
      anon_sym_todo,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [58] = 3,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_todo,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [69] = 1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [75] = 1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [81] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [87] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [93] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_bundle,
      anon_sym_body,
  [99] = 2,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_bundle_body,
  [106] = 1,
    ACTIONS(42), 2,
      anon_sym_RBRACE,
      anon_sym_todo,
  [111] = 1,
    ACTIONS(44), 1,
      sym_identifier,
  [115] = 1,
    ACTIONS(46), 1,
      sym_identifier,
  [119] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [123] = 1,
    ACTIONS(50), 1,
      sym_identifier,
  [127] = 1,
    ACTIONS(52), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 99,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 111,
  [SMALL_STATE(15)] = 115,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 123,
  [SMALL_STATE(18)] = 127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 4, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
