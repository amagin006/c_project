#include <stdio.h>
#include "libvc.h"

void test_vc_memalloc() {
  char *ptr = (char *)vc_memalloc(10);
  printf("========== vc_memalloc =============\n");
  printf("========== expect : 0 0 0 0 0 0 0 0 0 0 =============\n");
  for(size_t i = 0; i < 10; i++)
  {
    printf("%d \n", ptr[i]);
  }
  
}


