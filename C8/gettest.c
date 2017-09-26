#include "syscalls.h"
#include "get.c"

main()
{
	char buf[1001];
	int n;
	long pos = 0;

	while ((n = get(0, pos, buf, sizeof(buf))) > 0) {
		write(1, buf, n);
		pos += n;
	}
	return 0;
}
