#include <stdio.h>

int vc_isdigit(int num) {
  if ( num >= 48 && num <= 57 ) {
    return 1;
  }
  return 0;
  
}
