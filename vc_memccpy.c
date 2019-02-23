#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void *vc_memccpy(void *dest, void *src, int c, size_t len){
    char *cdest = (char*) dest;
    char *csrc = (char*) src;

    bool FLAG = false;
    while ((len--) && FLAG == false){
        if (*csrc == c){
            cdest++;
            FLAG = true;    
        }else{
            cdest++;
            csrc++;
        }
    }
    if (FLAG == true){
        return cdest;
    }else{
        return NULL;
    }
}