  #pragma linkage C

/* system call prototypes for chapter 8 */

#ifndef BUFSIZ
#define	BUFSIZ	4096
#endif
#ifndef EOF
#define	EOF	(-1)
#endif

int read(int, char *, int);
int write(int, char *, int);
int open(char*, int, int);
int creat(char *, int);
int close(int);

long lseek(int, long, int);

int stat(const char *, struct stat *);
int fstat(int fd, struct stat *);

char *sbrk(int);

   #pragma linkage
