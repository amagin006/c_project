#include <unistd.h>
 
void vc_putendl(char const *s){
    char *p = s;
    int count = 0;
    while (*p++ != '\0')
        count++;
    write(1, s, count);
    write(1,"\n", 1);
}