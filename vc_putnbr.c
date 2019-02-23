#include <unistd.h>
#include <stdlib.h>

void vc_putnbr(int n)
{

    if (n < 0)
    {
        write(1,"-",1);
        n = -n;
    }

    if (n == 0)
        write(1,"0",1);
    else
    {   
        int t = n;
        int count = 1;
        while (t/=10){
            count++;
        }
        char *str = (char*) malloc(sizeof(char) * (count+1));
        char *p1 = str;
        while (n != 0){
            *p1 = ((n%10) + '0');
            p1++;
            n = n/10;
        }
        *p1 = '\0';

        char *res = (char*) malloc(sizeof(char) * (count+1));
        char *p2 = res;
        for (int i = (count -1); i >=0; i--){
            *p2 = str[i];
            p2++;
        }
        *p2 = '\0';
        write(1,res,(count+1));
        write(1,"\n",1);
    }
}

int main(){
    int x = 876;
    printnumber(x);
    return 0;
}