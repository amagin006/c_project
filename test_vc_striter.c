#include <stdio.h>
#include "libvc.h"

static void *next(char *ch) {
  *ch = *ch - 1;
}

void test_vc_striter() {
    char *msg = "HELLO";
    vc_striter(msg, next);

    printf("========== vc_striter 1 =============\n");
    printf("========== expect : IFMMP =============\n");
    printf("%s\n", msg);
}


