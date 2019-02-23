#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"
void test_vc_memccpy(){
    char str1[50] = "Hello World";
    char str2[50] = "My name is Tom";
    printf("%s\n", vc_memccpy(str1, str2, 'a', 7));
}