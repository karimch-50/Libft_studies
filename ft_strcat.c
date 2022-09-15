#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest,char *src)
{
	int dest_len = 0;
	int i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return dest;
}