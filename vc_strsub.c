#include <stdio.h>
#include <stdlib.h>

char *vc_strsub(char const *s, size_t start, size_t len){
    char *p = s;
    int count = 0;
    while (*p != '\0'){
        count++;
        p++;
    }
    if ((start >= count) || (len > (count - start))){
        return "0\0";
    }else{
        char *result = (char*) malloc(sizeof(char) * len);
        if (result){
            s += start;
            int i = 0;
            while (i++ < len){
                *result++ = *s++;
            }
            while (len--){
                result--;
            }
            return result;
        }else{
            return NULL;
        }
    }
}
