#include <stdio.h>

void vc_striter(char *s, void (*f)(char *)) {
  int count = 0;
  while (s[count] != '\0') {
    count++;
  }

  for(int i = 0; i < count; i++)
  {
    f(&(s[i]));
  }
}
