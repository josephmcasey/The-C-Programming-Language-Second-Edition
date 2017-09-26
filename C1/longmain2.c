/* print longest input line; specialized version */
main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)    /* there was a line */
		printf("%s", longest);
	return 0;
}
