#ifndef	DIRSIZ
#define	DIRSIZ	14
#endif
struct direct   /* directory entry */
{
    ino_t d_ino;          /* inode number */
    char  d_name[DIRSIZ]; /* long name does not have '\0' */
};
