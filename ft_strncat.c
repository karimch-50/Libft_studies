#include "libft.h"

//char *strncat(char *restrict dest, const char *restrict src, size_t n);
char *ft_strncat(char *dest, const char *src, int n)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] && i < n)
		dest[dest_len++] = src[i++];
	dest[dest_len] ='\0';
	return dest;
}

// testing

// int main()
// {
// 	char dest[] = "Hello";
// 	char src[] = " World";
// 	strncat(dest, src, 6);
// 	puts(dest);
// 	return (0);
// }