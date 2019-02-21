#include <stdio.h>
#include <stdlib.h>

void *vc_memalloc(size_t size) {
  unsigned char *area = (unsigned char *)malloc(size);
  if (area == NULL) {
    return NULL;
  }
  for(size_t i=0; i<size; i++) {
    area[i] = 0;
  }
  return area;
}