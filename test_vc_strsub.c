#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"
void test_vc_strsub(){
    char *str = "Hello world";
    printf("%s\n", vc_strsub(str, 3, 4));
}