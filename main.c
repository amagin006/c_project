#include <stdio.h>

int main(){
    printf("============\n");
    char str[50] = "Hello World";
    printf("===========\m");
    
    return 0;
}


gcc main.c -L. -lvc -o main  