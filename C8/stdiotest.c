#include "syscalls.h"
#define _iob myiob
 #pragma linkage C
void *malloc(int);
 #pragma linkage

#include "stdio1.h"
#include "stdio2.h"
#include "stdio3.h"

#include "iobuf.c"

#include "fopen.c"
#include "fillbuf.c"

int _flushbuf(int c, FILE *fp)
{
	char s[2];

	s[0] = c;
	write(fileno(fp), s, 1);
	return c;
}

main(int argc, char *argv[])
{
	int c;
	FILE *fp;

	if ((fp = fopen(argv[1], "r")) == NULL) {
		write(2, "urk\n", 4);
		return argc;
	}
	for (;;) {
		c = getc(fp);
		if (feof(fp))
			break;
		putchar(c);
	}
	return 0;
}
