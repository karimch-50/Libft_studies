#include <unistd.h>
#include <string.h>
#include <stdio.h>

//void *ft_memchr(const void *s, int c, size_t n);
char *ft_memchr(char *s, int c, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return &s[i];
		i++;
	}
	return (0);
}

//testing

// int main()
// {
// 	char str[] = "Hello World!!";
// 	puts(ft_memchr(str, 'X', 4));
// 	return (0);
// }