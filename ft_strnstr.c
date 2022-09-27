#include "libft.h"
//#include <bsd/string.h>

//char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strnstr(char *str, char *tofind, int n)
{
	int i;
	int j;

	i =0;
	if (!tofind[i])
		return &str[i];
	
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[j + i] == tofind[j])
		{
			j++;
			if(tofind[j] == '\0')
				return &str[i];
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "Hello my name is karim";
// 	char tofind[] = "";
// 	puts(ft_strnstr(str, tofind, 5));

// 	return (0);
// }

// gcc ft_strnstr.c -lbsd