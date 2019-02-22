#include <stdio.h>

char *vc_strnstr(const char *big, const char *little, size_t len) {
  const char *littleCounter = little;
  int littleNum = 0;

  while(little[littleNum] != '\0'){
    littleNum++;
  }
  
  
  for(size_t i = 0; i < len; i++)
  {
    int num = 0;
    if(big[i] == little[num]) 
    {
      int correctChar = 0;
      for(size_t j = 0; j < littleNum; j++)
      {
        if (big[i + j] == little[j]) {
          correctChar++;
        }
      }
      if (correctChar == littleNum) {
        return (char *)(big + i);
      }
      num++;
    }
  }
  return NULL;
}

