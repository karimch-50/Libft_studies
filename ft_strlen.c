#include "libft.h"

//size_t strlen(const char *s);
int	ft_strlen(char *str)
{
	int count;
	count = 0;
	while (str[count])
		count++;
	return count;
}

// int main(void)
// {
// 	char str[] = "hello 1337";
// 	int result = ft_strlen(str);
// 	printf("result %d\n", result);
// }