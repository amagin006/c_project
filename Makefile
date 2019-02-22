#Makefile

# all: main

main: vc_memset.o vc_isalpha.o vc_isprint.o vc_bzero.o vc_isdigit.o vc_toupper.o vc_memcpy.o vc_strnstr.o vc_tolower.o vc_memccpy.o vc_isalnum.o vc_isascii.o vc_memdel.o vc_memalloc.o vc_striter.o vc_strclr.o vc_itoa.o vc_strtrim.o vc_strlen.o vc_strdup.o vc_strcpy.o vc_strncpy.o vc_strcat.o vc_strncat.o vc_strlcat.o vc_strstr.o vc_strcmp.o vc_strncmp.o vc_atoi.o vc_puts.o
	ar r libvc.a vc_memset.o vc_isalpha.o	vc_isprint.o vc_bzero.o vc_isdigit.o vc_toupper.o vc_memcpy.o vc_strnstr.o vc_tolower.o vc_memccpy.o vc_isalnum.o vc_isascii.o vc_memdel.o vc_memalloc.o vc_striter.o vc_strclr.o	vc_itoa.o	vc_strtrim.o vc_strlen.o vc_strdup.o vc_strcpy.o vc_strncpy.o vc_strcat.o vc_strncat.o vc_strlcat.o vc_strstr.o vc_strcmp.o vc_strncmp.o vc_atoi.o vc_puts.o

%.o: %.c
	gcc $< -c -o $@


# vc_isalpha.o: vc_isalpha.c
# 	gcc -c vc_isalpha.c
# vc_isdigit.o: vc_isdigit.c
# 	gcc -c vc_isdigit.c 

clean:
	rm -f *.o

