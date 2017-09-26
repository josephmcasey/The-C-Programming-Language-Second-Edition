
#include <stdio.h>
#define MAXLINES	5000	/* max lines to be sorted */

main()	/* sort input lines */
{
	char *lineptr[MAXLINES]; /* pointers to text lines */
	int nlines;		/* number of input lines read */
	int readlines(char *lineptr[], int nlines);
	void writelines(char *lineptr[], int nlines);
	void shell(char *lineptr[], int n);

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		shell(lineptr, nlines);
		writelines(lineptr, nlines);
	} else
		printf("input too big to sort\n");
}

char *alloc(int n) { void *malloc(int); return (char *) malloc(n); }
#include "readlines.c"
#include "writelines.c"

#include "shell.c"

#include "getline.c"
