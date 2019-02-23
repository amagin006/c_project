#include <stdio.h>
#include "libvc.h"

void test_vc_isalpha() {

    printf("========== isalpha1 =============\n");
    printf("========== expect : 1 =============\n");
    printf("--- :%d \n",  vc_isalpha('a'));

    printf("========== isalpha2 =============\n");
    printf("========== expect : 0 =============\n");
    printf("--- :%d \n",  vc_isdigit(200));
}


