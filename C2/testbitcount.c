#include <stdio.h>

#include "getbits.c"
#include "bitcount.c"

main()
{
	int i, n;

	if (bitcount(072) != 4) /* 0111010 */
		printf("error 072\n");
	for (i = 1; i <= 30; i++)
		if (bitcount(3<<i) != 2)
			printf("error 3 << %d\n", i);
	for (i = 0; i < 25; i++) {
		n = 033 << i;	/* 011011 */
		if (getbits(n, i+3, 3) != 5)
			printf("error getbits 1 %d\n", i);
		if (getbits(n, i+1, 2) != 3)
			printf("error getbits 2 %d\n", i);
		if (getbits(n, i+2, 1) != 0)
			printf("error getbits 3 %d\n", i);
	}
	return 0;
}
