#include <stdio.h>
#include <string.h>

#include "reverse.c"
#include "itoa.c"

main()
{
	char buf[100], buf1[100];
	int n1;

	while (gets(buf) != NULL) {
		sscanf(buf, "%d", &n1);
		itoa(n1, buf1);
		if (strcmp(buf, buf1) != 0)
			printf("botch on %s\n", buf);
	}
	return 0;
}
