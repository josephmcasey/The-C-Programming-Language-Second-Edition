#include <stdio.h>
#include <string.h>

#include "fgetline.c"
#include "fputs.c"

main()
{
	char buf[1000];

	while (getline(buf, sizeof buf) > 0)
		fputs(buf, stdout);
	return 0;
}
