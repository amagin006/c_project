#include <unistd.h>

void vc_putchar(char c){
    char str[2] = {c, '\0'};
    write(1, str, 2);
    write(1,"\n", 1);
}
