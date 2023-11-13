#include "types.h"
#include "user.h"

int
sys_wolfie(void)
{
    char *image;
    int n;

    if(argstr(0, &image) < 0 || argint(1, (int*)&n) < 0)
        return -1;
    return fileread(f, p, n);
}