#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_hello = 1,
  anon_sym_hi = 2,
  anon_sym_world = 3,
  anon_sym_china = 4,
  sym_source_file = 5,
  sym_greet = 6,
  sym_hello = 7,
  sym_place = 8,
  aux_sym_source_file_repeat1 = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_hello] = "hello",
  [anon_sym_hi] = "hi",
  [anon_sym_world] = "world",
  [anon_sym_china] = "china",
  [sym_source_file] = "source_file",
  [sym_greet] = "greet",
  [sym_hello] = "hello",
  [sym_place] = "place",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_hello] = anon_sym_hello,
  [anon_sym_hi] = anon_sym_hi,
  [anon_sym_world] = anon_sym_world,
  [anon_sym_china] = anon_sym_china,
  [sym_source_file] = sym_source_file,
  [sym_greet] = sym_greet,
  [sym_hello] = sym_hello,
  [sym_place] = sym_place,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_hello] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_world] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_china] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_greet] = {
    .visible = true,
    .named = true,
  },
  [sym_hello] = {
    .visible = true,
    .named = true,
  },
  [sym_place] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'w') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_hello);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_hi);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_world);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_china);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_hello] = ACTIONS(1),
    [anon_sym_hi] = ACTIONS(1),
    [anon_sym_world] = ACTIONS(1),
    [anon_sym_china] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_greet] = STATE(2),
    [sym_hello] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_hello] = ACTIONS(5),
    [anon_sym_hi] = ACTIONS(5),
  },
  [2] = {
    [sym_greet] = STATE(3),
    [sym_hello] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_hello] = ACTIONS(5),
    [anon_sym_hi] = ACTIONS(5),
  },
  [3] = {
    [sym_greet] = STATE(3),
    [sym_hello] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_hello] = ACTIONS(11),
    [anon_sym_hi] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(6), 1,
      sym_place,
    ACTIONS(14), 2,
      anon_sym_world,
      anon_sym_china,
  [8] = 1,
    ACTIONS(16), 3,
      ts_builtin_sym_end,
      anon_sym_hello,
      anon_sym_hi,
  [14] = 1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      anon_sym_hello,
      anon_sym_hi,
  [20] = 1,
    ACTIONS(20), 2,
      anon_sym_world,
      anon_sym_china,
  [25] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 8,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 25,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_place, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greet, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hello, 1),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pxu(void) {
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
