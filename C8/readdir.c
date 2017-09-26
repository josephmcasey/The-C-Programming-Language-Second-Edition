#include <sys/dir.h>    /* local directory structure */

/* readdir:  read directory entries in sequence */
Dirent *readdir(DIR *dp)
{
	struct direct dirbuf; /* local directory structure */
	static Dirent d;      /* return: portable structure */

	while (read(dp->fd, (char *) &dirbuf, sizeof(dirbuf))
					== sizeof(dirbuf)) {
		if (dirbuf.d_ino == 0)    /* slot not in use */
			continue;
		d.ino = dirbuf.d_ino;
		strncpy(d.name, dirbuf.d_name, DIRSIZ);
		d.name[DIRSIZ] = '\0';  /* ensure termination */
		return &d;
	}
	return NULL;
}
