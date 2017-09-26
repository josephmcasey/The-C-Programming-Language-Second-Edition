#include <stdio.h>

#include "binsearch.c"

main()
{
	int bin[1024], i, k, n;

	for (i = 0; i < 1024; i++)
		bin[i] = 2 * i + 1; /* odd numbers in table */
	while (scanf("%d", &n) != EOF) {
		k = binsearch(n, bin, 1024);
		if (k == -1 && (n < 0 || n >= 1024 || n%2 == 0))
			;	/* ok -- outside table or even, not found */
		else if (k == -1)
			printf("error: didn't find %d\n", n);
		else if (bin[k] == n)
			/* ok */;
		else
			printf("can't happen: n=%d, k=%d, bin[k]=%d\n", n, k, bin[k]);
	}
	return 0;
}
