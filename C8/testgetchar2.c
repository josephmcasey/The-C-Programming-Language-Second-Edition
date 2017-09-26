#include <stdio.h>
#undef getchar
#include "getchar2.c"

main() {
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
	return 0;
}
