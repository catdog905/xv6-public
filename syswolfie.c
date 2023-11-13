#include "types.h"
#include "defs.h"

int
sys_wolfie(void)
{
    char *image;
    int n;

    if(argstr(0, &image) < 0 || argint(1, (int*)&n) < 0)
        return -1;
    const char* wolfie = "                              __\n"
                         "                            .d$$b\n"
                         "                          .' TO$;\\\n"
                         "                         /  : TP._;\n"
                         "                        / _.;  :Tb|\n"
                         "                       /   /   ;j$j\n"
                         "                   _.-\"       d$$$$\n"
                         "                 .' ..       d$$$$;\n"
                         "                /  /P'      d$$$$P. |\\\n"
                         "               /   \"      .d$$$P' |\\^\"l\n"
                         "             .'           `T$P^\"\"\"\"\"  :\n"
                         "         ._.'      _.'                ;\n"
                         "      `-.-\".-'-' ._.       _.-\"    .-\"\n"
                         "    `.-\" _____  ._              .-\"\n"
                         "   -(.g$$$$$$$b.              .'\n"
                         "     \"\"^^T$$$P^)            .(:\n"
                         "       _/  -\"  /.'         /:/;\n"
                         "    ._.'-'`-'  \")/         /;/;\n"
                         " `-.-\"..--\"\"   \" /         /  ;\n"
                         ".-\" ..--\"\"        -'          :\n"
                         "..--\"\"--.-\"         (\\      .-(\\\n"
                         "  ..--\"\"              `-\\(\\/;`\n";
    int image_size = strlen(wolfie);
    if (image_size > n) {
        image[0] = '\0';
        return -1;
    }
    strncpy(image, wolfie, image_size);
    return image_size;
}
