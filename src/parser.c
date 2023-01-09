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
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_identifier = 25,
  sym__section_begin = 26,
  sym_comment = 27,
  sym_raw_content = 28,
  sym_source_file = 29,
  sym__section = 30,
  sym_section = 31,
  sym_value_type = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_section_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_section_name] = "section_name",
  [sym_section_name_id_like] = "section_name",
  [sym_section_name_python_like] = "section_name",
  [sym_section_name_id_list] = "section_name_id_list",
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
  [sym_identifier] = "identifier",
  [sym__section_begin] = "_section_begin",
  [sym_comment] = "comment",
  [sym_raw_content] = "raw_content",
  [sym_source_file] = "source_file",
  [sym__section] = "_section",
  [sym_section] = "section",
  [sym_value_type] = "value_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_section_name] = sym_section_name,
  [sym_section_name_id_like] = sym_section_name,
  [sym_section_name_python_like] = sym_section_name,
  [sym_section_name_id_list] = sym_section_name_id_list,
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
  [sym_identifier] = sym_identifier,
  [sym__section_begin] = sym__section_begin,
  [sym_comment] = sym_comment,
  [sym_raw_content] = sym_raw_content,
  [sym_source_file] = sym_source_file,
  [sym__section] = sym__section,
  [sym_section] = sym_section,
  [sym_value_type] = sym_value_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(513);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ':') ADVANCE(999);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(476);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'b') ADVANCE(819);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead == 'j') ADVANCE(707);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(634);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == 'u') ADVANCE(794);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(708);
      if (lookahead == 'x') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ':') ADVANCE(999);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(476);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'b') ADVANCE(819);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead == 'j') ADVANCE(707);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(634);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == 'u') ADVANCE(794);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(708);
      if (lookahead == 'x') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead == 'j') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(239);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1027);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(1029);
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
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'j') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(1033);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(497);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(1030);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(1027);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(995);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(995);
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(1000);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(1028);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(506);
      END_STATE();
    case 173:
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(230);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 176:
      if (lookahead == 'f') ADVANCE(406);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(456);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(1030);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 183:
      if (lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 184:
      if (lookahead == 'g') ADVANCE(402);
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 185:
      if (lookahead == 'g') ADVANCE(405);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(342);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(1030);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(487);
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 237:
      if (lookahead == 'j') ADVANCE(46);
      END_STATE();
    case 238:
      if (lookahead == 'j') ADVANCE(424);
      END_STATE();
    case 239:
      if (lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(1027);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(1017);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(1019);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(1031);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 261:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 263:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 266:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 267:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 268:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 269:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 270:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 271:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 272:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 273:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(430);
      END_STATE();
    case 275:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(1027);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(1029);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(1033);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(1007);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(1030);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(1011);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == 'x') ADVANCE(348);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(1030);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(432);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(443);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 362:
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(995);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(998);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(1009);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(996);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(1015);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(1004);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(1029);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(997);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(1013);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(1030);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(278);
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 494:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 495:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 496:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 497:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 498:
      if (lookahead == 'x') ADVANCE(1029);
      END_STATE();
    case 499:
      if (lookahead == 'x') ADVANCE(464);
      END_STATE();
    case 500:
      if (lookahead == 'x') ADVANCE(357);
      END_STATE();
    case 501:
      if (lookahead == 'y') ADVANCE(1033);
      END_STATE();
    case 502:
      if (lookahead == 'y') ADVANCE(995);
      END_STATE();
    case 503:
      if (lookahead == 'y') ADVANCE(997);
      END_STATE();
    case 504:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 505:
      if (lookahead == 'y') ADVANCE(1030);
      END_STATE();
    case 506:
      if (lookahead == 'y') ADVANCE(1031);
      END_STATE();
    case 507:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 508:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 509:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 510:
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1025);
      END_STATE();
    case 511:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(511)
      if (lookahead != 0) ADVANCE(1034);
      END_STATE();
    case 512:
      if (eof) ADVANCE(513);
      if (lookahead == ':') ADVANCE(999);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(512)
      END_STATE();
    case 513:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == ' ') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(970);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(628);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(907);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(915);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(769);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(881);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(981);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(781);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(843);
      if (lookahead == '_') ADVANCE(710);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '2') ADVANCE(1029);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(631);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(640);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(737);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '_') ADVANCE(851);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == 'o') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(776);
      if (lookahead == 'e') ADVANCE(912);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'h') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == 'q') ADVANCE(974);
      if (lookahead == 'u') ADVANCE(784);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(760);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(845);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'c') ADVANCE(591);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead == 's') ADVANCE(978);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(812);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(950);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(931);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(957);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead == 'o') ADVANCE(785);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(766);
      if (lookahead == 'm') ADVANCE(856);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'b') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(702);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(984);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(626);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(964);
      if (lookahead == 'p') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(876);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(994);
      if (lookahead == 'm') ADVANCE(847);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(1001);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'p') ADVANCE(867);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(736);
      if (lookahead == 'v') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(977);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(1003);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(986);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(869);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(971);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'f') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == 'u') ADVANCE(811);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(948);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == 't') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(894);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(817);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(955);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'f') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(896);
      if (lookahead == 't') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(839);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'g') ADVANCE(832);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(789);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(784);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(799);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'j') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'j') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'k') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(962);
      if (lookahead == 'r') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(979);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1018);
      if (lookahead == 't') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(1020);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(963);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == 'o') ADVANCE(860);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(850);
      if (lookahead == 's') ADVANCE(923);
      if (lookahead == 'x') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(846);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(662);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'm') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(927);
      if (lookahead == 's') ADVANCE(930);
      if (lookahead == 'x') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 't') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1008);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(1012);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(647);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(966);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(874);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(976);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(827);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(642);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(828);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(830);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(932);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'p') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'q') ADVANCE(968);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(980);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(989);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead == 'u') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(993);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(849);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(991);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(985);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1010);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(1016);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(951);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(838);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(953);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(840);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 's') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1006);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(1014);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(861);
      if (lookahead == 'v') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(992);
      if (lookahead == 'u') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(651);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(969);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(879);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(959);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(871);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(893);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'u') ADVANCE(784);
      if (lookahead == 'y') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'v') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'w') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(947);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'x') ADVANCE(946);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(852);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_section_name_id_like);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_section_name_python_like);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_section_name_i18n);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_section_name_any);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_section_delim);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_value_DASHtype);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_value_DASHtype);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_unit);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_plugin);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_estimated_duration);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_estimated_duration);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_entry_point);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_entry_point);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_natural);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_estimated_duration);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(1026);
      if (lookahead == 's') ADVANCE(1021);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(1026);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1022);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'm') ADVANCE(1026);
      if (lookahead == 's') ADVANCE(1021);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1024);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == 'm') ADVANCE(1026);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1024);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_estimated_duration);
      if (lookahead == ' ' ||
          lookahead == ':') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_flags);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_flags);
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_entry_point);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_exporter_option);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_plugin);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_plugin);
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1034);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 512, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 512, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 512, .external_lex_state = 2},
  [7] = {.lex_state = 512, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 512, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 512, .external_lex_state = 3},
  [19] = {.lex_state = 511, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 512, .external_lex_state = 3},
  [22] = {.lex_state = 512, .external_lex_state = 3},
  [23] = {.lex_state = 512, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 3},
  [26] = {.lex_state = 2, .external_lex_state = 3},
  [27] = {.lex_state = 512, .external_lex_state = 3},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 512, .external_lex_state = 3},
  [30] = {.lex_state = 512, .external_lex_state = 3},
  [31] = {.lex_state = 512, .external_lex_state = 3},
  [32] = {.lex_state = 512, .external_lex_state = 3},
  [33] = {.lex_state = 512, .external_lex_state = 3},
  [34] = {.lex_state = 512, .external_lex_state = 3},
  [35] = {.lex_state = 512, .external_lex_state = 3},
  [36] = {.lex_state = 512, .external_lex_state = 3},
  [37] = {.lex_state = 512, .external_lex_state = 3},
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
    [sym__section_begin] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_raw_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__section] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__section_begin] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_section_name_id_like,
    ACTIONS(11), 1,
      sym_section_name_python_like,
    ACTIONS(13), 1,
      sym_section_name_i18n,
    ACTIONS(15), 1,
      anon_sym_command,
    ACTIONS(17), 1,
      anon_sym_value_DASHtype,
    ACTIONS(19), 1,
      aux_sym_section_token1,
    ACTIONS(21), 1,
      anon_sym_unit,
    ACTIONS(23), 1,
      anon_sym_plugin,
    ACTIONS(25), 1,
      anon_sym_flags,
    ACTIONS(27), 1,
      anon_sym_estimated_duration,
    ACTIONS(29), 1,
      anon_sym_entry_point,
    ACTIONS(31), 1,
      anon_sym_options,
    STATE(17), 1,
      sym_section,
  [43] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__section_begin,
    STATE(3), 2,
      sym__section,
      aux_sym_source_file_repeat1,
  [57] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_exporter_option,
    STATE(4), 1,
      aux_sym_section_repeat1,
    ACTIONS(38), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [71] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__section_begin,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym__section,
      aux_sym_source_file_repeat1,
  [85] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_exporter_option,
    STATE(4), 1,
      aux_sym_section_repeat1,
    ACTIONS(45), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [99] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_value_type,
    ACTIONS(49), 2,
      anon_sym_bool,
      anon_sym_natural,
  [110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_raw_content,
    ACTIONS(51), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_raw_content,
    ACTIONS(51), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_raw_content,
    ACTIONS(51), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_exporter_option,
    STATE(6), 1,
      aux_sym_section_repeat1,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__section_begin,
      ts_builtin_sym_end,
  [201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_section_delim,
  [208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
  [215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_section_delim,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_section_delim,
  [236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_section_delim,
  [243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_raw_content,
  [250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_unit,
  [257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_plugin,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_flags,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_estimated_duration,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_entry_point,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_section_delim,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_section_delim,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_section_delim,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_section_delim,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_section_delim,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_section_delim,
  [327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_section_delim,
  [334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_section_delim,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 215,
  [SMALL_STATE(21)] = 222,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 236,
  [SMALL_STATE(24)] = 243,
  [SMALL_STATE(25)] = 250,
  [SMALL_STATE(26)] = 257,
  [SMALL_STATE(27)] = 264,
  [SMALL_STATE(28)] = 271,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 285,
  [SMALL_STATE(31)] = 292,
  [SMALL_STATE(32)] = 299,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 313,
  [SMALL_STATE(35)] = 320,
  [SMALL_STATE(36)] = 327,
  [SMALL_STATE(37)] = 334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_type, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
