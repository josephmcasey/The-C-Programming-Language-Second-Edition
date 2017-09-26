#include <stdio.h>

#include "strcat.c"

main()
{
	char buf[1000], urk[1000];
	int n = 0;

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		sprintf(urk, "%d", ++n);
		strcat(urk, buf);
		printf("%s", urk);
	}
	return 0;
}
