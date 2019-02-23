#include <stdio.h>

void test_vc_strnstr() {

  char *big1 = "Hello Wolrd center right left top bottom";
  char *little1 = "center";
  char *ptr1 = vc_strnstr(big1, little1, 40);
  printf("==========strnstr1=============\n");
  printf("========== expect : center right left top bottom  =============\n");
  printf("--- :%s \n", ptr1);

  char *big2 = "Hello Wolrd center right left top bottom";
  char *little2 = "centtr";
  char *ptr2 = vc_strnstr(big2, little2, 40); 
  printf("==========strnstr2=============\n");
  printf("========== expect : NULL  =============\n");
  printf("--- :%s \n", ptr2);

  char *big3 = "Hello Wolrd center right left top bottom";
  char *little3 = "center";
  char *ptr3 = vc_strnstr(big3, little3, 4);
  printf("==========strnstr3=============\n");
  printf("========== expect : NULL  =============\n");
  printf("--- :%s \n", ptr3);

}


