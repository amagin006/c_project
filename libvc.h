#ifndef LIBVC_H
#define LIBVC_H

// vc_atoi
int vc_atoi(char *str);

// vc_bzero
void vc_bzero(void *str, size_t len);

// vc_isalnum
int vc_isalnum(int c);

// vc_isalpha
int vc_isalpha(int ch);

// vc_isascii


// vc_isdigit
int vc_isdigit(int num);

// vc_isprint


// vc_itoa
char *vc_itoa(int n);

// vc_memalloc
void *vc_memalloc(size_t size);

// vc_memccpy
void *vc_memccpy(void *dest, void *src, int c, size_t len);

// vc_memchr
void *vc_memchr(const void *s, int c, size_t n);

// vc_memcmp
int vc_memcmp(const void *s1, const void *s2, size_t n);

// vc_memcpy
void *vc_memcpy(void *dest, void *src, size_t len);

// vc_memdel
void vc_memdel(void **ap);

// vc_memmove
void *vc_memmove(void *dst, const void *src, size_t len);

// vc_memset
void *vc_memset(void *str, int c, size_t len);

// vc_putchar


// vc_putendl


// vc_putnbr


// vc_puts(vc_putstr)
void vc_putstr(char *str);

// vc_strcat
char *vc_strcat(char *dest, char *src);

// vc_strchr


// vc_strclr


// vc_strcmp
int vc_strcmp(char *s1, char *s2);

// vc_strcpy
char *vc_strcpy(char *dest, char *src);

// vc_strdel


// vc_strdup
char *vc_strdup(char *src);

// vc_striter
void vc_striter(char *s, void (*f)(char *));

// vc_strjoin


// vc_strlcat
unsigned int vc_strlcat(char *dest, char *src, unsigned int size);

// vc_strlen
int vc_strlen(char *str);

// vc_strmap
char *vc_strmap(char const *s, char (*f)(char));

// vc_strncat
char *vc_strncat(char *dest, char *src, int n);

// vc_strncmp
int vc_strncmp(char *s1, char *s2, unsigned int n);

// vc_strncpy
char *vc_strncpy(char *dest, char *src, size_t n);

// vc_strnew


// vc_strnstr


// vc_strrchr


// vc_strsplit
char **vc_strsplit(char const *s, char c);

// vc_strstr
char *vc_strstr(char *str, char *to_find);

// vc_strsub


// vc_strtrim


// vc_tolower


// vc_toupper


#endif //LIBVC_H
