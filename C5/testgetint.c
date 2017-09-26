#include <stdio.h>

#define SIZE 100

main()
{
	int i;

#include "getintloop.c"

	for (i = 0; i < n; i++)
		printf("%d\n", array[i]);
	return 0;
}

#include "getint.c"
#include "getch.c"
#include "ungetch.c"
