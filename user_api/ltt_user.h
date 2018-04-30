/**
 * LTTng to GTKwave trace conversion
 *
 * Authors:
 * Romain Roffé <rofferom@gmail.com>
 *
 */

#ifndef __LTT_USER_H__
#define __LTT_USER_H__

#ifdef __cplusplus
extern "C" {
#endif

void ltt_trace_start_id(int id);
void ltt_trace_stop_id(int id);
void ltt_trace_write(const char *str);
void ltt_trace_writef(const char *str, ...);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !__LTT_USER_H__ */
