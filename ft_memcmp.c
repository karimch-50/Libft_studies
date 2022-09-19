#include <unistd.h>
#include <string.h>
#include <stdio.h>

//int memcmp(const void *s1, const void *s2, size_t n);
int ft_memcmp(const char *s1, const char *s2, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return 0;
}

// testing

// int main()
// {
// 	char str1[] = "Hello my name is karim";
// 	char str2[] = "Hello my name is karim";
// 	printf("%d\n",ft_memcmp(str1, str2,25));
// 	return (0);
// }