#include <stdio.h>

main()
{
	void minprintf(char *, ...);
	int max = 10;
	char *s = "hello, world";


	minprintf("50%% are wrong: %d %f %s %f %d\n",
		123, 456.78, "hello, world", 1e5, 99);
	minprintf("%d/%d = %f (%s)\n",
		355, 113, (double) 355/113, "approximately");
#include "printfstar.c"
	putchar('\n');
	return 0;
}

#include "minprintf.c"
