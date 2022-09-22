#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

//BONUS PART-------------------------------------------------------------

// typedef struct s_list
// {
// 	void				*content;
// 	size_t			content_size;
// 	struct s_list	*next;
// }						t_list;

// PART1----------------------------------------------------------------

int ft_atoi(const char *str);

//void ft_bzero(void *s, size_t n);
void ft_bzero(char *s, int n);

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_isascii(int c);

//void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
//void *memcpy(void *restrict dest, const void *restrict src, size_t n);
//void *ft_memmove(void *dest, const void *src, size_t n);
//void *ft_memchr(const void *s, int c, size_t n);
//void *memset(void *s, int c, size_t n);
//int ft_memcmp(const void *s1, const void *s2, size_t n);

char *ft_memccpy(char *dest, char *src, int c, int n);
char *ft_memcpy(char *dest, const char *src, int n);
char *ft_memmove(char *dest, const char *src, int n);
char *ft_memchr(char *s, int c, int n);
char *ft_memset(char *s, int c, int n);
int ft_memcmp(const char *s1, const char *s2, int n);


//char *strncat(char *restrict dest, const char *restrict src, size_t n);
//char *ft_strnstr(const char *big, const char *little, size_t len);
//int strncmp(const char *s1, const char *s2, size_t n);
//char *strncpy(char *restrict dest, const char *restrict src, size_t n);
//size_t strlcat(char *dst, const char *src, size_t size);
//size_t strlen(const char *s);


char *ft_strstr(char *str, char *tofind);
char *ft_strrchr(const char *s, int c);
char *ft_strcat(char *dest,char *src);
char *ft_strchr(const char *s, int c);
char *ft_strcpy(char *dest,char *src);
char *ft_strdup(char *s);
int ft_strcmp(char *s1,char *s2);

char *ft_strncpy(char *dest, char *src,unsigned n);
char *ft_strnstr(char *str, char *tofind, int n);
char *ft_strncat(char *dest, const char *src, int n);
int ft_strncmp(char *s1, char *s2,unsigned int n);
int ft_strlcat(char *dest, char *src, int size);
int ft_strlen(char *str);

int ft_tolower(int c);
int ft_toupper(int c);

// PART2----------------------------------------------------------------




#endif 