#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"

void test_vc_bzero(){
    char str[50] = "Hello World";
    vc_bzero(str, 5);
    printf("%s\n", str);
}