#include <stdio.h>

void vc_striter(char *s, void (*f)(char *)) {
  printf("========== derric =============\n");
  int count = 0;
  while (s[count] != '\0') {
    count++;

  }

  for(int i = 0; i < count; i++)
  {
    f(&(s[i]));

    printf("%d\n", i);
  }
  
}
