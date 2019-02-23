#include <stdio.h>

int test_vc_memalloc(int ch) {
  char *ptr = (char *)vc_memalloc(10);
  printf("========== vc_memalloc =============\n");
  printf("========== expect : 0 0 0 0 0 0 0 0 0 0 =============\n");
  for(size_t i = 0; i < 10; i++)
  {
    printf("%d \n", ptr[i]);
  }
  
}


