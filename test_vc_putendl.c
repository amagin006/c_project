#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"
void test_vc_putendl(){
    char str[50] = "Hello world";
    vc_putendl(str);
}