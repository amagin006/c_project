#include <stdio.h>
char *vc_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

char *vc_strcpy2(char *dest, char *src)
{
  char *ret = dest;
  while ((*dest++ = *src++))
    ;
  return ret;
}
