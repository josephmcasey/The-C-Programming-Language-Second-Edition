#include <stdio.h>

#include "atof.c"
#include "atoi.c"

main()
{
	double f;
	int n;
	double atof(char *);
	int atoi(char *);
	char buf[100];

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		sscanf(buf, "%lf", &f);
		n = (int) (f + 0.5);
		printf("%f %f     %d %d\n", f, atof(buf), n, atoi(buf));
	}
	return 0;
}
