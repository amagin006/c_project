#Makefile

all: libvc.a main

libvc.a:  vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putnbr.o vc_putstr.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o
	ar r libvc.a  vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putnbr.o vc_putstr.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o

%.o: %.c
	gcc $< -c -o $@

main: test_vc_bzero.o  test_vc_isalnum.o  test_vc_isalpha.o  test_vc_isascii.o  test_vc_isdigit.o  test_vc_isprint.o  test_vc_itoa.o  test_vc_memccpy.o  test_vc_memchr.o  test_vc_memcmp.o  test_vc_memcpy.o  test_vc_memdel.o  test_vc_memmove.o  test_vc_memset.o  test_vc_putchar.o  test_vc_putendl.o  test_vc_putnbr.o test_vc_strchr.o  test_vc_strclr.o  test_vc_strdel.o  test_vc_striter.o  test_vc_strjoin.o test_vc_strmap.o test_vc_strnew.o  test_vc_strnstr.o  test_vc_strrchr.o  test_vc_strsplit.o  test_vc_strsub.o  test_vc_strtrim.o  test_vc_tolower.o  test_vc_toupper.o 
	gcc main.c test_vc_bzero.o  test_vc_isalnum.o  test_vc_isalpha.o  test_vc_isascii.o  test_vc_isdigit.o  test_vc_isprint.o  test_vc_itoa.o  test_vc_memccpy.o  test_vc_memchr.o  test_vc_memcmp.o  test_vc_memcpy.o  test_vc_memdel.o  test_vc_memmove.o  test_vc_memset.o  test_vc_putchar.o  test_vc_putendl.o  test_vc_putnbr.o test_vc_strchr.o  test_vc_strclr.o  test_vc_strdel.o  test_vc_striter.o  test_vc_strjoin.o test_vc_strmap.o test_vc_strnew.o  test_vc_strnstr.o  test_vc_strrchr.o  test_vc_strsplit.o  test_vc_strsub.o  test_vc_strtrim.o  test_vc_tolower.o  test_vc_toupper.o -L. -lvc -o main

# main.o: main.c libvc.h test_libvc.h test_vc_bzero.o  test_vc_isalnum.o  test_vc_isalpha.o  test_vc_isascii.o  test_vc_isdigit.o  test_vc_isprint.o  test_vc_itoa.o  test_vc_memccpy.o  test_vc_memchr.o  test_vc_memcmp.o  test_vc_memcpy.o  test_vc_memdel.o  test_vc_memmove.o  test_vc_memset.o  test_vc_putchar.o  test_vc_putendl.o  test_vc_putnbr.o test_vc_strchr.o  test_vc_strclr.o  test_vc_strdel.o  test_vc_striter.o  test_vc_strjoin.o test_vc_strmap.o test_vc_strnew.o  test_vc_strnstr.o  test_vc_strrchr.o  test_vc_strsplit.o  test_vc_strsub.o  test_vc_strtrim.o  test_vc_tolower.o  test_vc_toupper.o
# 	gcc main.c libvc.h test_libvc.h test_vc_bzero.o  test_vc_isalnum.o  test_vc_isalpha.o  test_vc_isascii.o  test_vc_isdigit.o  test_vc_isprint.o  test_vc_itoa.o  test_vc_memccpy.o  test_vc_memchr.o  test_vc_memcmp.o  test_vc_memcpy.o  test_vc_memdel.o  test_vc_memmove.o  test_vc_memset.o  test_vc_putchar.o  test_vc_putendl.o  test_vc_putnbr.o test_vc_strchr.o  test_vc_strclr.o test_vc_strdel.o  test_vc_striter.o  test_vc_strjoin.o test_vc_strmap.o  test_vc_strnew.o test_vc_strnstr.o  test_vc_strrchr.o  test_vc_strsplit.o  test_vc_strsub.o  test_vc_strtrim.o  test_vc_tolower.o  test_vc_toupper.o

# libvc:  vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putnbr.o vc_putstr.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o
# 	ar r libvc.a  vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_putstr.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o

# %.o: %.c
# 	gcc $< -c -o $@


# vc_isalpha.o: vc_isalpha.c
# 	gcc -c vc_isalpha.c
# vc_isdigit.o: vc_isdigit.c
# 	gcc -c vc_isdigit.c 

clean:
	rm -f *.o

