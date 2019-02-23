#include <stdio.h>
#include "libvc.h"

void test_vc_isdigit() {

    printf("==========isdigit=============\n");
    printf("========== expect : 1 =============\n");
    printf("--- :%d \n",  vc_isdigit(9));

    printf("==========isdigit=============\n");
    printf("========== expect : 0 =============\n");
    printf("--- :%d \n",  vc_isdigit(200));

}


