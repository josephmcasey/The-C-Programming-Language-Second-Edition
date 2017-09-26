#undef open

int myopen(char *name, int flags, int mode)
{
	if (flags & O_CREAT)
		return creat(name, mode);
	else
		return open(name, flags);
}
