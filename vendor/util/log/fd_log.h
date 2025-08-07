#ifndef HEADER_fd_src_util_log_fd_log_h
#define HEADER_fd_src_util_log_fd_log_h

void
fd_log_private_1( int          level,
                  long         now,
                  char const * file,
                  int          line,
                  char const * func,
                  char const * msg ){}

/* Define minimal logging boot/halt functions */
void fd_log_private_boot(int * pargc, char *** pargv) { (void)pargc; (void)pargv; }
void fd_log_private_halt(void) {}

/* Define minimal logging macros */
#define FD_LOG_WARNING(x) do { } while(0)

#endif /* HEADER_fd_src_util_log_fd_log_h */
