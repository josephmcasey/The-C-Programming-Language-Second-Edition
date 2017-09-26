#include <stdio.h>
#include "enum.c"

main() {
	int i;

	printf("BELL, BACKSPACE, TAB, NEWLINE, VTAB, RETURN\n");
	printf("%o %o %o %o %o %o\n",
		BELL, BACKSPACE, TAB, NEWLINE, VTAB, RETURN);
	for (i = JAN; i <= DEC; i++)
		printf("%d ", i);
	printf("\n");
	return 0;
}
