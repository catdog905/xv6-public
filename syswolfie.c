#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"
#include "x86.h"

int
sys_wolfie(void *buf, uint size)
{
    buf = "Hello World!";
    return 0;
}
