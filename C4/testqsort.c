#include <stdio.h>

main()
{
	int i, n, in[1000];
	void qsort(int v[], int left, int right);

	n = 0;
	while (scanf("%d", &in[n]) != EOF)
		n++;
	qsort(in, 0, n-1);
	for (i = 0; i < n; i++)
		printf("%d\n", in[i]);
	return 0;
}

#include "qsort.c"
#include "swap.c"
