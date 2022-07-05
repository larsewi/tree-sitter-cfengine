module.exports = grammar({
  name: 'CFEngine',

  extras: $ => [
    $.comment,
    /[\s]+/
  ],

  rules: {
    source_file: $ => repeat($.block),

    block: $ => choice(
      $.bundle
      // TODO: body
      // TODO: promise
    ),

    bundle: $ => seq(
      'bundle',
      field('bundle_type', $.identifier),
      field('bundle_id', $.identifier),
      optional($.argument_list),
      $.bundle_body
    ),

    argument_list: $ => seq(
      '(',
      optional(
        seq(
          repeat(
            seq(
              $.identifier, ','
            )
          ),
          $.identifier,
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
      optional($.class_guard),
      $.promise_line,
      ';'
    ),

    promise_line: $ => seq(
      field('promiser', $.quoted_string)
    ),

    quoted_string: $ => /\"((\\(.|\n))|[^"\\])*\"|\'((\\(.|\n))|[^'\\])*\'|`[^`]*`/,

    identifier: $ => /[a-zA-Z0-9_]+/,

    promise_guard: $ => /[a-zA-Z_]+:/,

    class_guard: $ => /[.|&!()a-zA-Z0-9_:][\t .|&!()a-zA-Z0-9_:]*::/,

    comment: $ => token(seq('#', /.*/))
  }
});
