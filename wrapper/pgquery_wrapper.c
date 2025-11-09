#include "pgquery_wrapper.h"

PgQueryParseResult pg_query_parse_wrapper(const char* input) {
    return pg_query_parse(input);
}

void pg_query_free_parse_result_wrapper(PgQueryParseResult result) {
    pg_query_free_parse_result(result);
}