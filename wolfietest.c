#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    char* buf = "goodbye\0";
    sys_wolfie(buf, 0);
    printf(2, buf);
    return 0;
}