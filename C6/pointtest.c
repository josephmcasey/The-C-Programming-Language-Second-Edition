#include <stdio.h>

#define XMAX 320
#define YMAX 200

#include "point.h"
#include "rect.h"

#include "makepoint.c"
#include "addpoint.c"
#include "ptinrect.c"
#include "canonrect.c"

main()
{

#include "middle1.c"
	return 0;
}
void foo()
{
#include "middle2.c"
#include "middle3.c"

}
