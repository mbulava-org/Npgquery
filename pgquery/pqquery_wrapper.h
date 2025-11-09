#pragma once

#ifdef PGQUERY_WRAPPER_EXPORTS
#define PGQUERY_API __declspec(dllexport)
#else
#define PGQUERY_API __declspec(dllimport)
#endif

#include "pg_query.h"  // from upstream libpg_query

PGQUERY_API PgQueryParseResult pg_query_parse_wrapper(const char* input);
PGQUERY_API void pg_query_free_parse_result_wrapper(PgQueryParseResult result);