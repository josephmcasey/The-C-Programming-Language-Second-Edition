enum _flags {
    _READ   = 01,     /* file open for reading */
    _WRITE  = 02,     /* file open for writing */
    _UNBUF  = 04,     /* file is unbuffered */
    _EOF    = 010,    /* EOF has occurred on this file */
    _ERR    = 020     /* error occurred on this file */
};
