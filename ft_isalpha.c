#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'));
}