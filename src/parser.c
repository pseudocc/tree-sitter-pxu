#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_section_name = 1,
  sym_section_name_id_like = 2,
  sym_section_name_python_like = 3,
  sym_section_name_id_list = 4,
  sym_section_name_i18n = 5,
  sym_section_name_any = 6,
  sym_section_delim = 7,
  anon_sym_command = 8,
  anon_sym_value_DASHtype = 9,
  aux_sym_section_token1 = 10,
  anon_sym_unit = 11,
  anon_sym_plugin = 12,
  anon_sym_flags = 13,
  anon_sym_estimated_duration = 14,
  anon_sym_entry_point = 15,
  anon_sym_options = 16,
  anon_sym_bool = 17,
  anon_sym_natural = 18,
  sym_estimated_duration = 19,
  sym_flags = 20,
  sym_entry_point = 21,
  sym_exporter_option = 22,
  sym_plugin = 23,
  sym_unit = 24,
  sym__identifier = 25,
  aux_sym__template_identifier_token1 = 26,
  aux_sym__template_identifier_token2 = 27,
  sym__section_begin = 28,
  sym_comment = 29,
  sym_raw_content = 30,
  sym_source_file = 31,
  sym__section = 32,
  sym_section = 33,
  sym_value_type = 34,
  sym_identifier = 35,
  sym__template_identifier = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_section_repeat1 = 38,
  aux_sym_section_repeat2 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_section_name] = "section_name",
  [sym_section_name_id_like] = "section_name",
  [sym_section_name_python_like] = "section_name",
  [sym_section_name_id_list] = "section_name",
  [sym_section_name_i18n] = "section_name",
  [sym_section_name_any] = "section_name_any",
  [sym_section_delim] = "section_delim",
  [anon_sym_command] = "section_name",
  [anon_sym_value_DASHtype] = "section_name",
  [aux_sym_section_token1] = "section_name",
  [anon_sym_unit] = "section_name",
  [anon_sym_plugin] = "section_name",
  [anon_sym_flags] = "section_name",
  [anon_sym_estimated_duration] = "section_name",
  [anon_sym_entry_point] = "section_name",
  [anon_sym_options] = "section_name",
  [anon_sym_bool] = "bool",
  [anon_sym_natural] = "natural",
  [sym_estimated_duration] = "estimated_duration",
  [sym_flags] = "flags",
  [sym_entry_point] = "entry_point",
  [sym_exporter_option] = "exporter_option",
  [sym_plugin] = "plugin",
  [sym_unit] = "unit",
  [sym__identifier] = "_identifier",
  [aux_sym__template_identifier_token1] = "_template_identifier_token1",
  [aux_sym__template_identifier_token2] = "_template_identifier_token2",
  [sym__section_begin] = "_section_begin",
  [sym_comment] = "comment",
  [sym_raw_content] = "raw_content",
  [sym_source_file] = "source_file",
  [sym__section] = "_section",
  [sym_section] = "section",
  [sym_value_type] = "value_type",
  [sym_identifier] = "identifier",
  [sym__template_identifier] = "_template_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_section_repeat2] = "section_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_section_name] = sym_section_name,
  [sym_section_name_id_like] = sym_section_name,
  [sym_section_name_python_like] = sym_section_name,
  [sym_section_name_id_list] = sym_section_name,
  [sym_section_name_i18n] = sym_section_name,
  [sym_section_name_any] = sym_section_name_any,
  [sym_section_delim] = sym_section_delim,
  [anon_sym_command] = sym_section_name,
  [anon_sym_value_DASHtype] = sym_section_name,
  [aux_sym_section_token1] = sym_section_name,
  [anon_sym_unit] = sym_section_name,
  [anon_sym_plugin] = sym_section_name,
  [anon_sym_flags] = sym_section_name,
  [anon_sym_estimated_duration] = sym_section_name,
  [anon_sym_entry_point] = sym_section_name,
  [anon_sym_options] = sym_section_name,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_natural] = anon_sym_natural,
  [sym_estimated_duration] = sym_estimated_duration,
  [sym_flags] = sym_flags,
  [sym_entry_point] = sym_entry_point,
  [sym_exporter_option] = sym_exporter_option,
  [sym_plugin] = sym_plugin,
  [sym_unit] = sym_unit,
  [sym__identifier] = sym__identifier,
  [aux_sym__template_identifier_token1] = aux_sym__template_identifier_token1,
  [aux_sym__template_identifier_token2] = aux_sym__template_identifier_token2,
  [sym__section_begin] = sym__section_begin,
  [sym_comment] = sym_comment,
  [sym_raw_content] = sym_raw_content,
  [sym_source_file] = sym_source_file,
  [sym__section] = sym__section,
  [sym_section] = sym_section,
  [sym_value_type] = sym_value_type,
  [sym_identifier] = sym_identifier,
  [sym__template_identifier] = sym__template_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_section_repeat2] = aux_sym_section_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_id_like] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_python_like] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_id_list] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_i18n] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name_any] = {
    .visible = true,
    .named = true,
  },
  [sym_section_delim] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_value_DASHtype] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_estimated_duration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_entry_point] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_natural] = {
    .visible = true,
    .named = false,
  },
  [sym_estimated_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_point] = {
    .visible = true,
    .named = true,
  },
  [sym_exporter_option] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__template_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__template_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__section_begin] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__section] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__template_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_bash_script = 1,
  field_json = 2,
  field_python_like = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bash_script] = "bash_script",
  [field_json] = "json",
  [field_python_like] = "python_like",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_python_like, 2},
  [1] =
    {field_bash_script, 2},
  [2] =
    {field_json, 2},
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
  [27] = 27,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(563);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ':') ADVANCE(1050);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(520);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(869);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead == 'f') ADVANCE(610);
      if (lookahead == 'h') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'j') ADVANCE(757);
      if (lookahead == 'm') ADVANCE(606);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(904);
      if (lookahead == 'p') ADVANCE(803);
      if (lookahead == 'r') ADVANCE(684);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(844);
      if (lookahead == 'v') ADVANCE(617);
      if (lookahead == 'w') ADVANCE(758);
      if (lookahead == 'x') ADVANCE(808);
      if (lookahead == '}') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1074);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ':') ADVANCE(1050);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(520);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(869);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead == 'f') ADVANCE(610);
      if (lookahead == 'h') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'j') ADVANCE(757);
      if (lookahead == 'm') ADVANCE(606);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(904);
      if (lookahead == 'p') ADVANCE(803);
      if (lookahead == 'r') ADVANCE(684);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(844);
      if (lookahead == 'v') ADVANCE(617);
      if (lookahead == 'w') ADVANCE(758);
      if (lookahead == 'x') ADVANCE(808);
      if (lookahead == '}') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1074);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ':') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'j') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1074);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(261);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(481);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(461);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(242);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1078);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(1080);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == '8') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(382);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(223);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'q') ADVANCE(533);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'j') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(1084);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(1081);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(1078);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(1045);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(1045);
      if (lookahead == 'm') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(1051);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(1079);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(1084);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(1045);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(553);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(343);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(488);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 199:
      if (lookahead == 'f') ADVANCE(499);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(1081);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(366);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(442);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 211:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(1081);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 259:
      if (lookahead == 'j') ADVANCE(48);
      END_STATE();
    case 260:
      if (lookahead == 'j') ADVANCE(463);
      END_STATE();
    case 261:
      if (lookahead == 'k') ADVANCE(155);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(1078);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(1068);
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(1070);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(423);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(381);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'x') ADVANCE(469);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(1078);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(1084);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(1047);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(1058);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(1081);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(1062);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 374:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(1081);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(364);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(368);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 388:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 389:
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 390:
      if (lookahead == 'p') ADVANCE(511);
      END_STATE();
    case 391:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 392:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 393:
      if (lookahead == 'q') ADVANCE(525);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(1084);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(423);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(1078);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(1049);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(1047);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(1046);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(1055);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(1081);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(1048);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(1047);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(1064);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(1081);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(1082);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(399);
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 520:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 521:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 522:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 523:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 526:
      if (lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 527:
      if (lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(302);
      if (lookahead == 'y') ADVANCE(454);
      END_STATE();
    case 540:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 541:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 542:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 543:
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 544:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 545:
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 546:
      if (lookahead == 'x') ADVANCE(506);
      END_STATE();
    case 547:
      if (lookahead == 'x') ADVANCE(388);
      END_STATE();
    case 548:
      if (lookahead == 'y') ADVANCE(1084);
      END_STATE();
    case 549:
      if (lookahead == 'y') ADVANCE(1045);
      END_STATE();
    case 550:
      if (lookahead == 'y') ADVANCE(1048);
      END_STATE();
    case 551:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 552:
      if (lookahead == 'y') ADVANCE(1081);
      END_STATE();
    case 553:
      if (lookahead == 'y') ADVANCE(1082);
      END_STATE();
    case 554:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 555:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 556:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 557:
      if (lookahead == 'y') ADVANCE(383);
      END_STATE();
    case 558:
      if (lookahead == '}') ADVANCE(1090);
      END_STATE();
    case 559:
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1076);
      END_STATE();
    case 560:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(560)
      if (lookahead != 0) ADVANCE(1088);
      END_STATE();
    case 561:
      if (eof) ADVANCE(563);
      if (lookahead == ':') ADVANCE(1050);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(345);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'j') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(561)
      END_STATE();
    case 562:
      if (eof) ADVANCE(563);
      if (lookahead == '{') ADVANCE(1087);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(562)
      if (lookahead != 0) ADVANCE(1085);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(627);
      if (lookahead == 'o') ADVANCE(1020);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(800);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(653);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(876);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(817);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(780);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(967);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(957);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(818);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(628);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(1031);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(831);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(832);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(893);
      if (lookahead == '_') ADVANCE(760);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '2') ADVANCE(1080);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(905);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(681);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(690);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(787);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(901);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == 'q') ADVANCE(1024);
      if (lookahead == 'u') ADVANCE(834);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == 'e') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(984);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == 'c') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(891);
      if (lookahead == 'j') ADVANCE(873);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 's') ADVANCE(1028);
      if (lookahead == 't') ADVANCE(693);
      if (lookahead == 'u') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(954);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(991);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(995);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == 'o') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(1008);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(752);
      if (lookahead == 't') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(1034);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(993);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(812);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(642);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(1044);
      if (lookahead == 'm') ADVANCE(897);
      if (lookahead == 'n') ADVANCE(665);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(1052);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(696);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == 'p') ADVANCE(917);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead == 'i') ADVANCE(738);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead == 'h') ADVANCE(630);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'v') ADVANCE(768);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(1027);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == 'f') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1054);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1038);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1036);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(950);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1002);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'r') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(959);
      if (lookahead == 'u') ADVANCE(861);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(969);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(951);
      if (lookahead == 't') ADVANCE(979);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(944);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(990);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(867);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(1005);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(946);
      if (lookahead == 't') ADVANCE(989);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(879);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(789);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(882);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(830);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(833);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead == 's') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(670);
      if (lookahead == 'v') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 'u') ADVANCE(834);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(855);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(952);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(849);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(883);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'j') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'j') ADVANCE(949);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'k') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'r') ADVANCE(699);
      if (lookahead == 'u') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1029);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1071);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1017);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1013);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(766);
      if (lookahead == 'o') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(874);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(825);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(900);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead == 'x') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(683);
      if (lookahead == 't') ADVANCE(1015);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(638);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(828);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(833);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(977);
      if (lookahead == 's') ADVANCE(980);
      if (lookahead == 'x') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(665);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1059);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1063);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1016);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(960);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(975);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(778);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(842);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(1032);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(1026);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(692);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(991);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'q') ADVANCE(1018);
      if (lookahead == 's') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(998);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1040);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1030);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == 'u') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1043);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(963);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1041);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(662);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(1011);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1035);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1061);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1067);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(871);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1001);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1023);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(976);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(985);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1003);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(970);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == 'v') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1042);
      if (lookahead == 'u') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1019);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1022);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1009);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(986);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(912);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(964);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(834);
      if (lookahead == 'y') ADVANCE(966);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'w') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(997);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(996);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_section_name_id_like);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_section_name_python_like);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_section_name_id_list);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_section_name_i18n);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_section_name_any);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_section_delim);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_value_DASHtype);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_value_DASHtype);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_unit);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_plugin);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_estimated_duration);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_estimated_duration);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_entry_point);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_entry_point);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_natural);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_estimated_duration);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'h') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(1077);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'h') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(1077);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'm') ADVANCE(1077);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1075);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'm') ADVANCE(1077);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1075);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_flags);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_flags);
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_entry_point);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_exporter_option);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_plugin);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_plugin);
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '{') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1085);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '{') ADVANCE(1086);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead != 0) ADVANCE(1085);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '{') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1085);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1088);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__template_identifier_token1);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__template_identifier_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1090);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 561, .external_lex_state = 3},
  [3] = {.lex_state = 562, .external_lex_state = 2},
  [4] = {.lex_state = 562, .external_lex_state = 2},
  [5] = {.lex_state = 562, .external_lex_state = 3},
  [6] = {.lex_state = 562, .external_lex_state = 2},
  [7] = {.lex_state = 562, .external_lex_state = 2},
  [8] = {.lex_state = 561, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 561, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 562, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 561, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 561, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 561, .external_lex_state = 3},
  [25] = {.lex_state = 561, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 2, .external_lex_state = 3},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 561, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 561, .external_lex_state = 3},
  [32] = {.lex_state = 561, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 560, .external_lex_state = 3},
  [35] = {.lex_state = 561, .external_lex_state = 3},
  [36] = {.lex_state = 561, .external_lex_state = 3},
  [37] = {.lex_state = 561, .external_lex_state = 3},
  [38] = {.lex_state = 561, .external_lex_state = 3},
  [39] = {.lex_state = 561, .external_lex_state = 3},
  [40] = {.lex_state = 561, .external_lex_state = 3},
  [41] = {.lex_state = 561, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 561, .external_lex_state = 3},
  [44] = {.lex_state = 561, .external_lex_state = 3},
  [45] = {.lex_state = 561, .external_lex_state = 3},
};

enum {
  ts_external_token__section_begin = 0,
  ts_external_token_comment = 1,
  ts_external_token_raw_content = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__section_begin] = sym__section_begin,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_raw_content] = sym_raw_content,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__section_begin] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_raw_content] = true,
  },
  [2] = {
    [ts_external_token__section_begin] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_raw_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [sym_section_name_id_like] = ACTIONS(1),
    [sym_section_name_python_like] = ACTIONS(1),
    [sym_section_name_id_list] = ACTIONS(1),
    [sym_section_name_i18n] = ACTIONS(1),
    [sym_section_name_any] = ACTIONS(1),
    [sym_section_delim] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_value_DASHtype] = ACTIONS(1),
    [aux_sym_section_token1] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_estimated_duration] = ACTIONS(1),
    [anon_sym_entry_point] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_natural] = ACTIONS(1),
    [sym_estimated_duration] = ACTIONS(1),
    [sym_flags] = ACTIONS(1),
    [sym_entry_point] = ACTIONS(1),
    [sym_exporter_option] = ACTIONS(1),
    [sym_plugin] = ACTIONS(1),
    [sym_unit] = ACTIONS(1),
    [aux_sym__template_identifier_token2] = ACTIONS(1),
    [sym__section_begin] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_raw_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__section] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__section_begin] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_section_name_id_like,
    ACTIONS(11), 1,
      sym_section_name_python_like,
    ACTIONS(13), 1,
      sym_section_name_id_list,
    ACTIONS(15), 1,
      sym_section_name_i18n,
    ACTIONS(17), 1,
      anon_sym_command,
    ACTIONS(19), 1,
      anon_sym_value_DASHtype,
    ACTIONS(21), 1,
      aux_sym_section_token1,
    ACTIONS(23), 1,
      anon_sym_unit,
    ACTIONS(25), 1,
      anon_sym_plugin,
    ACTIONS(27), 1,
      anon_sym_flags,
    ACTIONS(29), 1,
      anon_sym_estimated_duration,
    ACTIONS(31), 1,
      anon_sym_entry_point,
    ACTIONS(33), 1,
      anon_sym_options,
    STATE(23), 1,
      sym_section,
  [46] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(40), 1,
      aux_sym__template_identifier_token1,
    STATE(6), 1,
      sym__template_identifier,
    ACTIONS(35), 2,
      sym__section_begin,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_identifier,
      aux_sym_section_repeat2,
  [67] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__identifier,
    ACTIONS(47), 1,
      aux_sym__template_identifier_token1,
    STATE(6), 1,
      sym__template_identifier,
    ACTIONS(43), 2,
      sym__section_begin,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_identifier,
      aux_sym_section_repeat2,
  [88] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__identifier,
    ACTIONS(47), 1,
      aux_sym__template_identifier_token1,
    STATE(6), 1,
      sym__template_identifier,
    STATE(4), 2,
      sym_identifier,
      aux_sym_section_repeat2,
  [105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__section_begin,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      sym__identifier,
      aux_sym__template_identifier_token1,
  [117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__section_begin,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      sym__identifier,
      aux_sym__template_identifier_token1,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_exporter_option,
    STATE(8), 1,
      aux_sym_section_repeat1,
    ACTIONS(57), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__section_begin,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym__section,
      aux_sym_source_file_repeat1,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_exporter_option,
    STATE(8), 1,
      aux_sym_section_repeat1,
    ACTIONS(43), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym__section_begin,
    STATE(11), 2,
      sym__section,
      aux_sym_source_file_repeat1,
  [185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__identifier,
    ACTIONS(47), 1,
      aux_sym__template_identifier_token1,
    STATE(6), 1,
      sym__template_identifier,
    STATE(21), 1,
      sym_identifier,
  [201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_raw_content,
    ACTIONS(71), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_value_type,
    ACTIONS(75), 2,
      anon_sym_bool,
      anon_sym_natural,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_raw_content,
    ACTIONS(71), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_raw_content,
    ACTIONS(71), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_exporter_option,
    STATE(10), 1,
      aux_sym_section_repeat1,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_section_delim,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_section_delim,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_raw_content,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_unit,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_plugin,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_flags,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_estimated_duration,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_entry_point,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_section_delim,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__identifier,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_section_delim,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_section_delim,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_section_delim,
  [401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_section_delim,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_section_delim,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_section_delim,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_section_delim,
  [429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym__template_identifier_token2,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_section_delim,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_section_delim,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_section_delim,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 234,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 261,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 277,
  [SMALL_STATE(22)] = 285,
  [SMALL_STATE(23)] = 295,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 317,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 338,
  [SMALL_STATE(30)] = 345,
  [SMALL_STATE(31)] = 352,
  [SMALL_STATE(32)] = 359,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 373,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 387,
  [SMALL_STATE(37)] = 394,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 408,
  [SMALL_STATE(40)] = 415,
  [SMALL_STATE(41)] = 422,
  [SMALL_STATE(42)] = 429,
  [SMALL_STATE(43)] = 436,
  [SMALL_STATE(44)] = 443,
  [SMALL_STATE(45)] = 450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat2, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_identifier, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_identifier, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_type, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pxu_external_scanner_create(void);
void tree_sitter_pxu_external_scanner_destroy(void *);
bool tree_sitter_pxu_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pxu_external_scanner_serialize(void *, char *);
void tree_sitter_pxu_external_scanner_deserialize(void *, const char *, unsigned);

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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pxu_external_scanner_create,
      tree_sitter_pxu_external_scanner_destroy,
      tree_sitter_pxu_external_scanner_scan,
      tree_sitter_pxu_external_scanner_serialize,
      tree_sitter_pxu_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
