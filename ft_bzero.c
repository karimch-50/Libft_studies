// #include <unistd.h>
//#include <stdio.h>
// #include <string.h>
#include "libft.h"

void ft_bzero(char *s, int n)
{
	ft_memset(s, 0, n);
}

// int main()
// {
// 	char str[20] = "hello evryone";
// 	ft_bzero(str, 1);
// 	puts(str);
// 	return (0);
// }