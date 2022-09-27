#include "libft.h"

char *ft_memccpy(char *dest, char *src, int c, int n)
{
	int i;

	i = -1;
	while (i < n && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// testing 

// int main()
// {
// 	char dest[20];
// 	char src[] = "Hello World";
// 	memccpy(dest, src, 'x' , 11);
// 	puts(dest);
// 	return (0);
// }
