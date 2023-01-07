/**
 * @file grammar.js
 * @auth pseudoc <atlas.yu@canonical.com>
 */

const options = grammar({
  name: 'pxu',
  rules: {
    source_file: ($) => repeat($.greet),
    greet: ($) => seq($.hello, $.place),
    hello: () => choice('hello', 'hi'),
    place: () => choice('world', 'china'),
  },
});

module.exports = options;
