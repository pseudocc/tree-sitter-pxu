/**
 * @file grammar.js
 * @auth pseudoc <atlas.yu@canonical.com>
 */

const options = grammar({
  name: 'pxu',

  extras: ($) => [
    /[\s\t]/,
    $.comment,
  ],

  externals: ($) => [
    $._section_begin,
    $.comment,
    $.raw_content,
  ],

  rules: {
    source_file: ($) => repeat($._section),

    _section: ($) =>
      seq(
        $._section_begin,
        $.section,
      ),

    section_name: ($) => /[a-z_\-]+/,

    section_name_id_like: ($) =>
      token(choice(
        'id',
        'category_id',
        'user',
        'template-resource',
        'template-engine',
        'resource-key',
        'os-id',
      )),

    section_name_python_like: ($) =>
      token(choice(
        'requires',
        'imports',
        'template-filter',
      )),

    section_name_id_list: ($) =>
      token(choice(
        'depends',
        'after',
        'salvages',
        'environ',
        'include',
        'mandatory_include',
        'bootstrap_include',
        'nested_part',
        'exculde',
      )),

    section_name_i18n: ($) =>
      token(choice(
        /_?summary/,
        /_?purpose/,
        /_?name/,
        /_?description/,
        /_?prompt/,
      )),

    section_name_any: ($) =>
      token(choice(
        'verification',
        'category-overrides',
        'file_extension',
        'data',
        'value-units',
        'os-version-id',
        'Depends',
        'Suggests',
        'Recommends',
      )),

    section_delim: ($) => token(prec(1, ':')),
    section: ($) =>
      choice(
        seq(
          alias($.section_name_python_like, $.section_name),
          $.section_delim,
          optional(field('python_like', $.raw_content)),
        ),
        seq(
          alias('command', $.section_name),
          $.section_delim,
          optional(field('bash_script', $.raw_content)),
        ),
        seq(
          alias('value-type', $.section_name),
          $.section_delim,
          $.value_type,
        ),
        seq(
          alias(/_?siblings/, $.section_name),
          $.section_delim,
          field('json', $.raw_content),
        ),
        seq(
          alias('unit', $.section_name),
          $.section_delim,
          $.unit,
        ),
        seq(
          alias('plugin', $.section_name),
          $.section_delim,
          $.plugin,
        ),
        seq(
          alias('flags', $.section_name),
          $.section_delim,
          $.flags,
        ),
        seq(
          alias('estimated_duration', $.section_name),
          $.section_delim,
          $.estimated_duration,
        ),
        seq(
          alias('entry_point', $.section_name),
          $.section_delim,
          $.entry_point,
        ),
        seq(
          alias('options', $.section_name),
          $.section_delim,
          repeat1($.exporter_option),
        ),
        seq(
          alias($.section_name_id_like, $.section_name),
          $.section_delim,
          $.identifier,
        ),
        seq(
          alias($.section_name_id_list, $.section_name),
          $.section_delim,
          repeat1($.identifier),
        ),
        seq(
          alias($.section_name_i18n, $.section_name),
          $.section_delim,
          optional($.raw_content),
        ),
      ),

    value_type: ($) => choice('bool', 'natural'),

    estimated_duration: ($) =>
      seq(
        optional(/\d+\s?h[:\s]?/),
        optional(/\d+\s?m[:\s]?/),
        /(\d*\.)?\d+s?/
      ),

    flags: ($) =>
      token(choice(
        'reset-locale',
        'win32',
        'noreturn',
        'explicit-fail',
        'has-leftovers',
        'simple',
        'preserve-cwd',
        'fail-on-resource',
        'also-after-suspend',
        'also-after-suspend-manual',
        'cachable',
      )),

    entry_point: ($) =>
      token(choice(
        'jinja2',
        'text',
        'xlsx',
        'json',
        'rfc822',
      )),

    exporter_option: ($) =>
      token(choice(
        'with-io-log',
        'squash-io-log',
        'flatten-io-log',
        'with-run-list',
        'with-job-list',
        'with-resource-map',
        'with-job-defs',
        'with-attachments',
        'with-comments',
        'with-job-via',
        'with-job-hash',
        'with-category-map',
        'with-certification-status',
        'machine-json',
        'with-sys-info',
        'with-summary',
        'with-job-description',
        'with-text-attachments',
        'with-unit-categories',
        'without-session-desc',
      )),

    plugin: ($) =>
      token(choice(
        'manual',
        'shell',
        'user-interact',
        'user-interact-verify',
        'attachment',
        'resource',
      )),

    unit: ($) =>
      token(choice(
        'job',
        'category',
        'test plan',
        'template',
        'exporter',
        'manifest entry',
      )),

    identifier: $ => choice($._identifier, $._template_identifier),
    _identifier: ($) => /[^\s\t\n]+/,
    _template_identifier: ($) =>
      seq(
        /[^\s\t\n]*\{\{\s?/,
        $._identifier,
        /\s?\}\}[^\s\t\n]*/,
      ),
  },
});

module.exports = options;
