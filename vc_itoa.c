#include <stdio.h>
#include <stdlib.h>

char *vc_itoa(int n) {
  int num = n;
  if (num > 0)
  {
    int digit = 0;
    while(num != 0) {
      num = num / 10;
      ++digit;
    }
    char *area = (char *)malloc(sizeof(char) * (digit + 1));
    int num2 = n;
    int remain = 0;
    for(int i = digit - 1; i >= 0; i--)
    {
      remain = num2 % 10;
      num2 = num2 / 10;
      char str = ((int)'0') + remain;
      area[i] = str;
    }
    area[digit] = '\0';

    return area;
  } else
  {
    return NULL;
  }
  
}
