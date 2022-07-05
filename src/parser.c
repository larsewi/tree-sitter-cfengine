#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_bundle = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  sym_quoted_string = 8,
  sym_identifier = 9,
  sym_promise_guard = 10,
  sym_class_guard = 11,
  sym_comment = 12,
  sym_source_file = 13,
  sym_block = 14,
  sym_bundle = 15,
  sym_argument_list = 16,
  sym_bundle_body = 17,
  sym_bundle_statement = 18,
  sym_promise_line = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_argument_list_repeat1 = 21,
  aux_sym_bundle_body_repeat1 = 22,
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
  [sym_promise_line] = "promise_line",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_promise_line] = sym_promise_line,
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
  [anon_sym_SEMI] = {
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
};

enum {
  field_bundle_id = 1,
  field_bundle_type = 2,
  field_promiser = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bundle_id] = "bundle_id",
  [field_bundle_type] = "bundle_type",
  [field_promiser] = "promiser",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bundle_id, 2},
    {field_bundle_type, 1},
  [2] =
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
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(28);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(25);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 16:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_bundle);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(28);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
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
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
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
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_block] = STATE(2),
    [sym_bundle] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_bundle] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_bundle,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_bundle,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [17] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_bundle,
    STATE(17), 1,
      sym_bundle,
    STATE(3), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [34] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(18), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_bundle_body,
    STATE(23), 1,
      sym_argument_list,
  [50] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      sym_promise_guard,
    STATE(5), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [64] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym_promise_guard,
    STATE(5), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [78] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_promise_guard,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_bundle_statement,
      aux_sym_bundle_body_repeat1,
  [92] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_argument_list_repeat1,
  [105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_quoted_string,
    ACTIONS(37), 1,
      sym_class_guard,
    STATE(26), 1,
      sym_promise_line,
  [118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_argument_list_repeat1,
  [128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_quoted_string,
    STATE(32), 1,
      sym_promise_line,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
  [156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
  [166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_argument_list_repeat1,
  [176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_RBRACE,
      sym_promise_guard,
  [200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      sym_identifier,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_bundle,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_bundle_body,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      sym_promise_guard,
  [254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_identifier,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SEMI,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_SEMI,
  [296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_SEMI,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_identifier,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 156,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 176,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 192,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 208,
  [SMALL_STATE(21)] = 218,
  [SMALL_STATE(22)] = 228,
  [SMALL_STATE(23)] = 236,
  [SMALL_STATE(24)] = 246,
  [SMALL_STATE(25)] = 254,
  [SMALL_STATE(26)] = 261,
  [SMALL_STATE(27)] = 268,
  [SMALL_STATE(28)] = 275,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 296,
  [SMALL_STATE(32)] = 303,
  [SMALL_STATE(33)] = 310,
  [SMALL_STATE(34)] = 317,
  [SMALL_STATE(35)] = 324,
  [SMALL_STATE(36)] = 331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(31),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 4, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 5, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_statement, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_line, 1, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
