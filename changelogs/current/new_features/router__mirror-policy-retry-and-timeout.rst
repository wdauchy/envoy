Added :ref:`retry_policy <envoy_v3_api_field_config.route.v3.RouteAction.RequestMirrorPolicy.retry_policy>`
and :ref:`timeout <envoy_v3_api_field_config.route.v3.RouteAction.RequestMirrorPolicy.timeout>` to
request mirror policies. Mirrored requests were never retried and always used the timeout of the
primary request; they can now be retried against the mirror cluster and given their own timeout.
