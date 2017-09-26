#include <stdio.h>

main()
{
	char buf1[100], buf2[100];
	int strcmp(char *, char *), strcmp2(char *, char *);
	int n1, n2;

	while (fgets(buf1, sizeof buf1, stdin) != NULL) {
		fgets(buf2, sizeof buf2, stdin);
		n1 = strcmp(buf1, buf2);
		n2 = strcmp2(buf1, buf2);
		printf("%d %d\n", n1, n2);
	}
	return 0;
}

#include "strcmp.c"

#define strcmp strcmp2
#include "strcmp2.c"
