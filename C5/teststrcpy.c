#include <stdio.h>
#include <string.h>

extern void strcpy1(char *, char*);
extern void strcpy2(char *, char*);
extern void strcpy3(char *, char*);
extern void strcpy4(char *, char*);


main() {
	char buf[1000], buf1[1000];

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		strcpy1(buf1, buf);
		if (strcmp(buf, buf1) != 0)
			fprintf(stderr, "strcpy1 botch: %s\n", buf);
		strcpy2(buf1, buf);
		if (strcmp(buf, buf1) != 0)
			fprintf(stderr, "strcpy2 botch: %s\n", buf);
		strcpy3(buf1, buf);
		if (strcmp(buf, buf1) != 0)
			fprintf(stderr, "strcpy3 botch: %s\n", buf);
		strcpy4(buf1, buf);
		if (strcmp(buf, buf1) != 0)
			fprintf(stderr, "strcpy4 botch: %s\n", buf);
	}
	return 0;
}

#define strcpy strcpy1
#include "strcpy1.c"
#undef strcpy

#define strcpy strcpy2
#include "strcpy2.c"
#undef strcpy

#define strcpy strcpy3
#include "strcpy3.c"
#undef strcpy

#define strcpy strcpy4
#include "strcpy4.c"
#undef strcpy
