#include <stdio.h>
#define	MAXLINE	1000

main()	/* trim:  remove trailing blanks and tabs */
{
	int n, getline(char line[], int max);
	char line[MAXLINE];

	while ((n = getline(line, MAXLINE)-1) >= 0) {
		while (--n >= 0 && (line[n] == ' ' || line[n] == '\t'))
			;
		line[n+1] = '\0';
		printf("%s\n", line);
	}
	return 0;
}
