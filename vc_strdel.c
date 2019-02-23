#include <stdio.h>
#include <stdlib.h>

void vc_strdel(char **as){
    free(*as);
    *as = NULL;
}