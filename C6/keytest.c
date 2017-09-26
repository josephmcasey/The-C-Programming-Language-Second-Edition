#include "keystruct.c"
#define  NKEYS  (sizeof(keytab) / sizeof(struct key))
#include "keymain.c"
#include "keybinary.c"

#include "getch.c"
#include "ungetch.c"

#include "getword.c"
