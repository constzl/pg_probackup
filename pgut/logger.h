/*-------------------------------------------------------------------------
 *
 * logger.h: - prototypes of logger functions.
 *
 * Portions Copyright (c) 2017-2017, Postgres Professional
 *
 *-------------------------------------------------------------------------
 */

#ifndef LOGGER_H
#define LOGGER_H

/* Log destination bitmap */
#define LOG_DESTINATION_STDERR		1
#define LOG_DESTINATION_LOGFILE		2

/* Log level */
#define VERBOSE		(-5)
#define LOG			(-4)
#define INFO		(-3)
#define NOTICE		(-2)
#define WARNING		(-1)
#define ERROR		1
#define FATAL		2
#define PANIC		3

/* Logger parameters */

extern int			log_destination;
extern int			log_level;
extern bool			quiet;

extern char		   *log_filename;
extern char		   *log_error_filename;
extern char		   *log_directory;

extern int			log_rotation_size;
extern int			log_rotation_age;

#undef elog
extern void elog(int elevel, const char *fmt, ...) pg_attribute_printf(2, 3);

#endif   /* LOGGER_H */
