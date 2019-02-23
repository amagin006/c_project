#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"
void test_vc_memset(){
    char str[50] = "Hello World";
    printf("%s\n", vc_memset(str, '$',3));
}