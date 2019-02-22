#include <stdio.h>
#include "libvc.h"

int main(){
    printf("============\n");
    char str[50] = "Hello World";
    printf("isalpha %d \n", vc_isalpha(str[0]));
    printf("===========\n");
    return 0;
}
