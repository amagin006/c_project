#include <stdio.h>
#include <stdlib.h>
#include "libvc.h"
void test_vc_strjoin(){
    char str1[59] = "hello World";
    char str2[50] = "Hi there";
    printf("%s\n", vc_strjoin(str1, str2));
}