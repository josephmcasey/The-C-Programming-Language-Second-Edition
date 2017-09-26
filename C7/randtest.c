#include <stdio.h>
#define RAND_MAX 32767
#include "randdef.c"
#include "rand.c"
#include "srand.c"

main()
{
	int i;
	float x, xmax = 0;

	for (i = 1; i <= 2 * RAND_MAX; i++) {
		x = frand();
		if (x > xmax)
			xmax = x;
	}
	if (xmax >= 1.0)
		printf("urk! %g\n", xmax);
	else
		printf("ok %g\n", xmax);
	return 0;
}
