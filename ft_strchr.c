#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (char *)&s[i];
		i++;
	}
	return 0;	
}

// testing

// int main()
// {
// 	char str[12] = "Hello world";
// 	puts(ft_strchr(str,'o'));
// 	puts(strchr(str,'o'));
// 	return (0);
// }
