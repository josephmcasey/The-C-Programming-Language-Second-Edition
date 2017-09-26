#include <stdio.h>

#include "strlen.c"

main()
{
	char buf[1000];

	while (fgets(buf, sizeof buf, stdin) != NULL)
		printf("%d%s", strlen(buf), buf);
	return 0;
}
