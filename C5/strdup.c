char *strsave(char *s)	/* save string s somewhere */
{
	char *p, *alloc(int);

	if ((p = alloc(strlen(s)+1)) != NULL)
		strcpy(p, s);
	return(p);
}
