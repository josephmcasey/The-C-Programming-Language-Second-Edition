typedef long Align;  /* for alignment to long boundary */

union header {       /* block header: */
    struct {
        union header *ptr; /* next block if on free list */
        unsigned size;     /* size of this block */
    } s;
    Align x;         /* force alignment of blocks */
};

typedef union header Header;
