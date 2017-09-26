#include <stdio.h>

#include "rand.c"
#include "srand.c"

main()
{
	int i;

	for (i = 1; i < 10; i++)
		printf(" %d", rand());
	printf("\n");
	srand(1);
	for (i = 1; i < 10; i++)
		printf(" %d", rand());
	printf("\n");
	return 0;
}
