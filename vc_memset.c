#include <stdio.h>

void *vc_memset(void *str, int c, size_t len)
{
    unsigned char *p = str;
    while(len--)
        *p++ = (unsigned char) c;
    return str;
}


