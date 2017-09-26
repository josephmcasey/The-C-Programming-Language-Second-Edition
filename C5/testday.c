#include <stdio.h>

main()
{
	int m, d, y = 1987;
	int n, xm, xd;
	int day_of_year(int, int, int);
	void month_day(int, int, int *, int *);
	char buf[100];

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		printf(buf);
		if ((n=sscanf(buf, "%d %d %d", &d, &m, &y)) == 3 || n == 1) /* d m y */
			printf("\t%d\n", day_of_year(y, m, d));
		else if (n == 2) {
			sscanf(buf, "%d %d", &d, &y);
			month_day(y, d, &xm, &xd);
			printf("\t%d %d\n", xm, xd);
		}
	}
	return 0;
}

#include "dayofyear.c"
#include "monthday.c"
