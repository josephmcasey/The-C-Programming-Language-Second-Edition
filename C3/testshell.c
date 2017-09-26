#include <stdio.h>

#include "shellsort.c"

main()
{
	int i, n, in[1000];

	n = 0;
	while (scanf("%d", &in[n]) != EOF)
		n++;
	shellsort(in, n);
	for (i = 0; i < n; i++)
		printf("%d\n", in[i]);
	return 0;
}
