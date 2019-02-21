#include <stdio.h>

int vc_isalpha(int ch) {
  if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
    return 1;
  }
  return 0;
}


