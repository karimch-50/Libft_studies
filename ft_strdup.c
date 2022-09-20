#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *s)
{
	int i;
	int s_len;
	char *ret;

	i= 0;
	s_len= 0;
	while (s[s_len])
		s_len++;
	ret = (char *) malloc(s_len + 1);
	if (!ret)
		return NULL;
	while (s[i])
		ret[i++] = s[i];
	s[i] = '\0';
	return ret;
}

//testing

// int main()
// {
// 	char str[12] = "Hello World";
// 	char *s = ft_strdup(str);
// 	puts(s);
// 	return (0);
// }