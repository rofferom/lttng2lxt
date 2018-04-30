/**
 * LTTng to GTKwave trace conversion
 *
 * Authors:
 * Romain Roffé <rofferom@gmail.com>
 *
 */

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER user

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./ltt_user_tracepoints.h"

#if !defined(LTT_USER_TRACEPOINTS_H_) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define LTT_USER_TRACEPOINTS_H_
#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
	user,
	event_start,
	TP_ARGS(int, id),
	TP_FIELDS(
			ctf_integer(int, event_start, id)
	)
)

TRACEPOINT_LOGLEVEL(
	user,
	event_start,
	TRACE_DEBUG_SYSTEM)

TRACEPOINT_EVENT(
	user,
	event_stop,
	TP_ARGS(int, id),
	TP_FIELDS(
		ctf_integer(int, event_stop, id)
	)
)

TRACEPOINT_LOGLEVEL(
	user,
	event_stop,
	TRACE_DEBUG_SYSTEM)

TRACEPOINT_EVENT(
	user,
	message,
	TP_ARGS(const char *, str),
	TP_FIELDS(
			ctf_string(message, str)
	)
)

TRACEPOINT_LOGLEVEL(
	user,
	message,
	TRACE_DEBUG_SYSTEM)

#endif /* !defined(LTT_USER_TRACEPOINTS_H_) || defined(TRACEPOINT_HEADER_MULTI_READ) */

#include <lttng/tracepoint-event.h>
