module.exports = grammar({
  name: 'CFEngine',

  extras: $ => [
    $.comment,
    $.macro,
    /[\s]+/
  ],

  rules: {
    source_file: $ => repeat($._block),

    _block: $ => choice(
      $.bundle
      // TODO: body
      // TODO: promise
    ),

    bundle: $ => seq(
      'bundle',
      alias($.identifier, $.bundle_type),
      alias($.identifier, $.bundle_id),
      optional($.argument_list),
      $.bundle_body
    ),

    argument_list: $ => seq(
      '(',
      optional(
        seq(
          repeat(
            seq(
              alias($.identifier, $.argument), ','
            )
          ),
          alias($.identifier, $.argument),
          optional(',')
        )
      ),
      ')'
    ),

    bundle_body: $ => seq(
      '{',
      repeat($.bundle_statement),
      '}'
    ),

    bundle_statement: $ => seq(
      $.promise_guard,
      repeat1(
        seq(
          $.promise_line,
          ';'
        )
      )
    ),

    right_value: $ => choice(
      $.identifier,
      $.quoted_string
      // TODO: naked_variable
      // TODO: list
      // TODO: function
    ),

    promise_line: $ => seq(
      optional($.class_guard),
      alias($.quoted_string, $.promiser),
      optional(seq('->', alias($.right_value, $.promisee)))
    ),

    quoted_string: $ => /\"((\\(.|\n))|[^"\\])*\"|\'((\\(.|\n))|[^'\\])*\'|`[^`]*`/,

    identifier: $ => /[a-zA-Z0-9_]+/,

    promise_guard: $ => /[a-zA-Z_]+:/,

    class_guard: $ => /[.|&!()a-zA-Z0-9_:][\t .|&!()a-zA-Z0-9_:]*::/,

    comment: $ => token(seq('#', /.*/)),

    macro: $ => token(
      choice(
        seq(
          '@if ',
          choice(
            seq(
              choice('minimum', 'maximum', 'before', 'at', 'after'),
              /_version\([0-9]{1,5}(\.[0-9]{1,5}){0,2}\)/
            ),
            /between_version\([0-9]{1,5}(\.[0-9]{1,5}){0,2} *, *[0-9]{1,5}(\.[0-9]{1,5}){0,2}\)/,
            /feature\([a-zA-Z0-9_]+\)/,
          )
        ),
        '@else',
        '@endif'
      )
    )

  }
});
