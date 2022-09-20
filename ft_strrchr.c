#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	while (s_len-- >= 0)
		if(s[s_len] == c)
			return (char *)&s[s_len];
	return 0;
}

//testing

// int main()
// {
// 	char str[12] = "Hello world";
// 	puts(ft_strrchr(str, 'o'));
// 	return (0);
// }