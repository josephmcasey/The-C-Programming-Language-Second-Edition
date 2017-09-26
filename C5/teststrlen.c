#include <stdio.h>

main()
{
	int n1, n2;
	int strlen(char *), strlen2(char *);
	char buf[1000];

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		n1 = strlen(buf);
		n2 = strlen2(buf);
		printf("%d %d\n", n1, n2);
	}
	return 0;
}

#include "strlen.c"

#define strlen strlen2
#include "strlen2.c"
