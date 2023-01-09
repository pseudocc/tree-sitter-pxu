#include <stdbool.h>
#include <stdint.h>
#include <tree_sitter/parser.h>

enum TokenType { SECTION_BEGIN, COMMENT, RAW_CONTENT };

#define SCANNER(name) tree_sitter_pxu_external_scanner_##name

static inline void try_skip_ignored(TSLexer *lexer) {
  while (!lexer->eof(lexer) && lexer->lookahead == '\n') {
    lexer->advance(lexer, true);
  }
}

static inline bool is_valid_section_begin(TSLexer *lexer) {
  if (lexer->eof(lexer) || lexer->get_column(lexer) != 0) {
    return false;
  }
  int32_t la = lexer->lookahead;
  return la == '_' || (la >= 'a' && la <= 'z');
}

void *SCANNER(create)() { return NULL; }

bool SCANNER(scan)(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[COMMENT]) {
    try_skip_ignored(lexer);
    if (lexer->get_column(lexer) != 0 || lexer->lookahead != '#') {
      goto NOT_A_COMMENT;
    }
    lexer->result_symbol = COMMENT;
    do {
      lexer->advance(lexer, false);
    } while (!lexer->eof(lexer) && lexer->lookahead != '\n');
    return true;
  }

NOT_A_COMMENT:
  if (valid_symbols[SECTION_BEGIN]) {
    try_skip_ignored(lexer);
    if (is_valid_section_begin(lexer)) {
      lexer->result_symbol = SECTION_BEGIN;
      return true;
    }
  }

  if (valid_symbols[RAW_CONTENT]) {
    lexer->result_symbol = RAW_CONTENT;
    do {
      lexer->advance(lexer, false);
    } while (!lexer->eof(lexer) && !is_valid_section_begin(lexer));
    return true;
  }

  return false;
}

unsigned SCANNER(serialize)(void *payload, char *state) { return 0; }

void SCANNER(deserialize)(void *payload, const char *state, unsigned length) {}

void SCANNER(destroy)(void *payload) {}
