#include <stdio.h>
#include "libvc.h"

#include "test_libvc.h"

int main(){

    test_vc_atoi();
    test_vc_bzero();
    test_vc_isalnum();
    test_vc_isalpha();
    test_vc_isascii();
    test_vc_isdigit();
    test_vc_isprint();
    test_vc_itoa();
    test_vc_memalloc();
    test_vc_memccpy();
    test_vc_memchr();
    test_vc_memcmp();
    test_vc_memcpy();
    test_vc_memdel();
    test_vc_memmove();
    test_vc_memset();
    test_vc_putchar();
    test_vc_putendl();
    test_vc_printnumber();
    test_vc_putstr();
    test_vc_strcat();
    test_vc_strchr();
    test_vc_strclr();
    test_vc_strcmp();
    test_vc_strcpy();
    test_vc_strdel();
    test_vc_strdup();
    test_vc_striter();
    test_vc_strjoin();
    test_vc_strlcat();
    test_vc_strlen();
    test_vc_strmap();
    test_vc_strncat();
    test_vc_strncmp();
    test_vc_strncpy();
    test_vc_strnew();
    test_vc_strnstr();
    test_vc_strrchr();
    test_vc_strsplit();
    test_vc_strstr();
    test_vc_strsub();
    test_vc_strtrim();
    test_vc_tolower();
    test_vc_toupper();

    return 0;
}
