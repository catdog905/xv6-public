#include "types.h"
#include "defs.h"

int
sys_wolfie(void)
{
    char *image;
    int n;

    if(argstr(0, &image) < 0 || argint(1, (int*)&n) < 0)
        return -1;
    image[0] = '\0';
    return 0;
}