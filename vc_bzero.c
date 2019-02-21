#include <stdio.h>
#include <string.h>

void vc_bzero(void *str, size_t len){
    unsigned char *p = str;
    while(len--)
        *p++ = '\0';
}