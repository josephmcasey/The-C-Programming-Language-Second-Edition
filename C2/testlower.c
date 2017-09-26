#include <stdio.h>

#include "lower.c"

main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(lower(c));
	return 0;
}
