-module(client).
-export([health_url/1]).
health_url(E) -> <<E/binary, "/healthz">>.
