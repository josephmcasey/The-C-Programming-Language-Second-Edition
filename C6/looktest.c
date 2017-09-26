#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "nlist.h"
#include "hash.h"

main()
{
	char buf[100], name[100], fcn[100], defn[100];
	struct nlist *p, *lookup(char *), *install(char *, char *);

	while (fgets(buf, sizeof buf, stdin) != NULL) {
		sscanf(buf, "%s %s %s", fcn, name, defn);
		if (strncmp(fcn, "def", 3) == 0)
			install(name, defn);
		else if ((p = lookup(fcn)) != NULL)
			printf("\t%s %s\n", fcn, p->defn);
		else
			printf("%s not found\n", fcn);
	}
	return 0;
}

#include "hash.c"
#include "lookup.c"
#include "strdup.c"
#include "install.c"

#include "getch.c"
#include "ungetch.c"
#include "getword.c"
