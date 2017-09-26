#define NULL      0
#define EOF       (-1)
#define BUFSIZ    1024
#define OPEN_MAX  20  /* max #files open at once */

typedef struct _iobuf {
    int  cnt;         /* characters left */
    char *ptr;        /* next character position */
    char *base;       /* location of buffer */
    int  flag;        /* mode of file access */
    int  fd;          /* file descriptor */
} FILE;
extern FILE _iob[OPEN_MAX];

#define stdin   (&_iob[0])
#define stdout  (&_iob[1])
#define stderr  (&_iob[2])
