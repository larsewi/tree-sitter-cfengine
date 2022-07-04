module.exports = grammar({
  name: 'CFEngine',

  extras: $ => [
    $.comment,
    /[\s]+/
  ],

  rules: {
    source_file: $ => repeat($.block),

    block: $ => choice(
      $.bundle,
      $.body
      // TODO: body
      // TODO: promise
    ),

    bundle: $ => seq(
      'bundle',
      field('bundle_type', $.identifier),
      field('bundle_id', $.identifier),
      // TODO: optional($.parameter_list),
      $.bundle_body
    ),

    bundle_body: $ => seq(
      '{',
      repeat($.bundle_statement),
      '}'
    ),

    bundle_statement: $ => seq(
      'todo'
    ),

    body: $ => seq(
      'body',
      field('body_type', $.identifier),
      field('body_id', $.identifier),
      // TODO: optional($.parameter_list),
      // $.bundle_body
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,

    promise_guard: $ => /[a-zA-Z_]+/,

    comment: $ => token(seq('#', /.*/))
  }
});
