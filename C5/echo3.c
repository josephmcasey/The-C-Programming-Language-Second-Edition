#include <stdio.h>

/* echo command-line arguments; 3rd version */
main(int argc, char *argv[])
{
    while (--argc > 0)
        printf((argc > 1) ? "%s " : "%s", *++argv);
    printf("\n");
    return 0;
}
