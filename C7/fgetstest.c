#include <stdio.h>

#include "fgets.c"
#include "fputs.c"

main()
{
	char buf[1000];

	while (fgets(buf, sizeof buf, stdin) != NULL)
		fputs(buf, stdout);
	return 0;
}
