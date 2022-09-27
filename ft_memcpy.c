#include "libft.h"

char *ft_memcpy(char *dest, const char *src, int n)
{
	int i;
	i = -1;
	if(n)
	{
		while (i++ < n)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return dest;
}