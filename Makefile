#Makefile

all: libvc main

main: main.o libvc.a
	gcc main.o -L. -lvc -o main

main.o: main.c libvc.h
	gcc -c main.c libvc.h

libvc:  vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_printnumber.o vc_putstr.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o
	ar r libvc.a  vc_atoi.o vc_bzero.o vc_isalnum.o vc_isalpha.o vc_isascii.o vc_isdigit.o vc_isprint.o vc_itoa.o vc_memalloc.o vc_memccpy.o vc_memchr.o vc_memcmp.o vc_memcpy.o vc_memdel.o vc_memmove.o vc_memset.o vc_putchar.o vc_putendl.o vc_printnumber.o vc_putstr.o vc_strcat.o vc_strchr.o vc_strclr.o vc_strcmp.o vc_strcpy.o vc_strdel.o vc_strdup.o vc_striter.o vc_strjoin.o vc_strlcat.o vc_strlen.o vc_strmap.o vc_strncat.o vc_strncmp.o vc_strncpy.o vc_strnew.o vc_strnstr.o vc_strrchr.o vc_strsplit.o vc_strstr.o vc_strsub.o vc_strtrim.o vc_tolower.o vc_toupper.o

%.o: %.c
	gcc $< -c -o $@


# vc_isalpha.o: vc_isalpha.c
# 	gcc -c vc_isalpha.c
# vc_isdigit.o: vc_isdigit.c
# 	gcc -c vc_isdigit.c 

clean:
	rm -f *.o

