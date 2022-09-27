#include "libft.h"

//void *memset(void *s, int c, size_t n);
char *ft_memset(char *s, int c, int n)
{
	int i;
	i = -1;
	while (i < n)
		s[i++] = c;
	return (s);
}