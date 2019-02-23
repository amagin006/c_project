#include <stdio.h>
#include <stdlib.h>

char *vc_strjoin(char const *s1, char const *s2){
    char *cs1 = s1;
    char *cs2 = s2;
    int count = 1;
    while (*cs1++ != '\0')
        count++;
    while (*cs2++ != '\0')
        count++;
    char *result = (char*) malloc(sizeof(char) * count);
    if (result){
        while (*s1 != '\0'){
            *result++ = *s1++;
        }
        while (*s2 != '\0'){
            *result++ = *s2++;
        }
        *result = '\0';
        while ((count--)>1)
            result--;
        return result;
    }else{
        return NULL;
    }

}