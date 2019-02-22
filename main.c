#include <stdio.h>

int main(){
    printf("============\n");
    char str[50] = "Hello World";
    printf("===========\n");
    return 0;
}


gcc main.c -L. -lvc -o main  