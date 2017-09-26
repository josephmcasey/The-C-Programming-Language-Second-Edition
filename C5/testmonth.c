#include <stdio.h>
#include "monthname.c"

main() {
	int i;

	for (i = 0; i <= 13; i++)
		printf("%s\n", month_name(i));
	return 0;
}
