#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
		return (1024);
	else
		return (0);
}