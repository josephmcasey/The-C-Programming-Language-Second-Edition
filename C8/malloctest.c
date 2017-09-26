#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "syscalls.h"

 #pragma linkage C

#define free xfree
#define malloc xalloc

#include "header.h"
#include "malloc.c"
#include "free.c"
#include "morecore.c"

char *p, *q[10];

main(int argc, char *argv[])
{
	char buf[1000];
	FILE *fp;
	int i, j, k;

	if (argc > 1)
		fp = fopen(argv[1], "r");
	else
		fp = stdin;
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		for (i = 0; i < 5; i++) {
			q[i] = (char *) malloc((k = rand() % 23));
			for (j = 0; j < k; j++)
				q[i][j] = 'x';
		}
		p = (char *) malloc(strlen(buf)+1);
		strcpy(p, buf);
		for (i = 5; i < 10; i++) {
			q[i] = (char *) malloc((k = rand() % 23));
			for (j = 0; j < k; j++)
				q[i][j] = 'y';
		}
		printf("%s", p);
		for (i = 0; i < 10; i++)
			if (i != 4 && i != 7)
				free(q[i]);
	}
	return 0;
}

  #pragma linkage
