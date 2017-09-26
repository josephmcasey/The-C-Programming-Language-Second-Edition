#include <string.h>

char *strstr(char *s, char *t)
{
	int slen = strlen(s);
	int tlen = strlen(t);
	int i;

	for (i = 0; i < slen-tlen; i++)
		if (strncmp(t, s+i, tlen) == 0)
			return s+i;
	return 0;
}
