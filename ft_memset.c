#include "libft.h"

char *ft_memset(char *s, int c, int n)
{
	int i;
	i = -1;
	while (i < n)
		s[i++] = c;
	return (s);
}