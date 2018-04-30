/**
 * LTTng to GTKwave trace conversion
 *
 * Authors:
 * Romain Roffé <rofferom@gmail.com>
 *
 */

#include <stdarg.h>
#define TRACEPOINT_CREATE_PROBES
#define TRACEPOINT_DEFINE
#define TRACEPOINT_PROBE_DYNAMIC_LINKAGE
#include "ltt_user_tracepoints.h"
#include "ltt_user.h"

void ltt_trace_start_id(int id)
{
	tracepoint(user, event_start, id);
}

void ltt_trace_stop_id(int id)
{
	tracepoint(user, event_stop, id);
}

void ltt_trace_write(const char *str)
{
	tracepoint(user, message, str);
}

void ltt_trace_writef(const char *str, ...)
{
	char string[128];
	va_list ap;
	va_start(ap, str);
	vsnprintf(string, sizeof(string), str, ap);
	va_end(ap);
	tracepoint(user, message, string);
}
