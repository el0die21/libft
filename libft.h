#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int ft_atoi (const char* str);
void    ft_bzero(void *s, size_t size);
void    *ft_calloc(size_t nb_el, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii (int c);
int ft_isdigit (int c);
int ft_isprint (int c);
int    len(long nb);
int ft_memcmp (const void *pnt1, const void *pnt2, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t num);
void *ft_memmove (void *dest, const void *src, size_t num);
void *ft_memset (void *pointer, int value, size_t size);
char    *ft_strchr(const char *str, int searched_char);
char    *ft_strdup (char *src);
char    *ft_strjoin(char const *s1, char const *s2);
unsigned int    ft_strlcat(char *dest, char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int ft_strncmp (const char* str1, const char* str2, size_t len);
char    *ft_strnstr(const char *str, const char *to_find, size_t len);
char    *ft_strrchr (const char *str, int searched_char);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower (int c);
int ft_toupper (int c);

#endif