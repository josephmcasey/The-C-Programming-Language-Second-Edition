#include <stdio.h>

main() {
	int a[100], i, n = 35;

	for (i = 0; i <= n; i++)
		a[i] = i;
#include "condexpr1.c"
	for (n=0; n <= 3; n++)
#include "condexpr2.c"
	return 0;
}
