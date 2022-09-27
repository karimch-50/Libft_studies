#include "libft.h"

//char *strncpy(char *restrict dest, const char *restrict src, size_t n);
char *ft_strncpy(char *dest, char *src,unsigned n)
{
	unsigned int i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
