#include <stdio.h>

#include "squeeze.c"

main()
{
	char buf[1000];

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		squeeze(buf, 'e');
		squeeze(buf, 't');
		printf("%s", buf);
	}
	return 0;
}
