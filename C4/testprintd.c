#include <stdio.h>

#include "printd.c"

main()
{
	char buf[100];
	int n;

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		sscanf(buf, "%d", &n);
		printd(n);
		printf("\n");
	}
	return 0;
}

