#include "libft.h"

//void *memmove(void *dest, const void *src, size_t n);
char *ft_memmove(char *dest, const char *src, int n)
{
	int i;
	i = 0;
	// if (dest > src)
	// 	while (n-- > 0)
	// 		dest[n] = src[n];
	// else
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	return dest;
}

// testing

// int main()
// {
// 	char dest[20];
// 	char str[] = "hello world\0";
// 	ft_memmove(dest, str,8);
// 	//puts(dest);
// 	puts(str);
// 	return (0);
// }


