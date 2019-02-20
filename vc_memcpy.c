#include <stdio.h>
#include <string.h>

void *vc_memcpy(void *dest, void *src, size_t len) 
{  
   char *csrc = (char *)src; 
   char *cdest = (char *)dest;  
   while(len--)
       *cdest++ = *csrc++;
   return dest;
}