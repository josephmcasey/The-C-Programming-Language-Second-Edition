#include <stdio.h>
#include <string.h>

#include "reverse.c"
#include "reverse2.c"

main()
{
	char buf[1000], buf1[1000];

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		strcpy(buf1, buf);
		reverse(buf1);
		reverse(buf1);
		if (strcmp(buf, buf1) != 0)
			printf("botch on %s\n", buf);
		reverse2(buf1);
		reverse2(buf1);
		if (strcmp(buf, buf1) != 0)
			printf("botch2 on %s\n", buf);
	}
	return 0;
}
