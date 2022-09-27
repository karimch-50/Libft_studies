#include "libft.h"
//#include <bsd/string.h>

//size_t strlcat(char *dst, const char *src, size_t size);
int ft_strlcat(char *dest, char *src, int size)
{
	int dest_len;
	int src_len;
	int ret;
	int i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);

	if (dest_len > size)
		ret = src_len + size;
	else
		ret = dest_len + src_len;
	
	while (src[i] != '\0' && dest_len < size - 1)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return ret;
}


// int main()
// {
// 	char dest[] = "hello\0";
// 	char src[] = " my name is karim\0";
// 	printf("%d\n", ft_strlcat(dest, src, 8));
// 	puts(dest);
// 	return (0);
// }