#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"
void test_vc_strdel(){
    char *str = (char*) malloc(sizeof(char)*10);
    vc_strdel(&str);
    printf("%s\n", str);
}