#include <stdio.h>

void vc_puts(char *str)
{
  while (*str != '\0')
    putchar(*str++);
}
