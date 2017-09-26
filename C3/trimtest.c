#include <stdio.h>
#include <string.h>

#define	MAXLINE	1000

int getline(char line[], int max);
int trim(char s[]);

main()	/* trim:  remove trailing blanks and tabs */
{
	int n;
	char line[MAXLINE];

	while ((n = getline(line, MAXLINE)) > 0) {
		trim(line);
		printf("%s\n", line);
	}
	return 0;
}

#include "trim.c"

#include "getline.c"
