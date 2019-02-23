#include <stdio.h>
#include "libvc.h"

void test_vc_itoa() {
  
    char *str = vc_itoa(1390);
    printf("==========vc_itoa=============\n");
    printf("========== expect : 1390  =============\n");
    printf("--- :%s \n", str);
}


