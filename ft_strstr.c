#include <unistd.h>

char *ft_strstr(char *str, char *tofind)
{
	int i;
	int j;
	i = 0;
	if (!tofind[i])
		return((char *)&str[i]);

	while (str[i] != '\0')
	{
		j = 0;
		while (tofind[j] == str[i + j])
		{
			j++;
			if (tofind[j] == '\0')
				return(&str[i]);
		}
		i++;
	}
	return (0);
}