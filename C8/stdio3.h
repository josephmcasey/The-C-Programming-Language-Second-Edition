int _fillbuf(FILE *);
int _flushbuf(int, FILE *);

#define	feof(p)     (((p)->flag & _EOF) != 0)
#define	ferror(p)   (((p)->flag & _ERR) != 0)
#define	fileno(p)   ((p)->fd)

#define getc(p)   (--(p)->cnt >= 0 \
               ? (unsigned char) *(p)->ptr++ : _fillbuf(p))
#define putc(x,p) (--(p)->cnt >= 0 \
               ? *(p)->ptr++ = (x) : _flushbuf((x),p))

#define getchar()   getc(stdin)
#define putchar(x)  putc((x), stdout)
