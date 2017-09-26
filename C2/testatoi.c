#include <stdio.h>

#include "atoi.c"

main()
{
	char buf[100];
	int n1, n2;

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		sscanf(buf, "%d", &n1);
		n2 = atoi(buf);
		if (n1 != n2)
			printf("error %d %d\n", n1, n2);
	}
	return 0;
}
