#include "libft.h"

int ft_atoi(const char *str)
{
	int sign;
	int i;
	int ret;
	
	ret = 0;
	sign = 1;
	i = 0;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		ret = ret * 10 + str[i++] - '0';
	return ret * sign;
}

// testing

// int main()
// {
// 	char str[] = "  a123a45";
// 	printf("%d\n%d\n", atoi(str), ft_atoi(str));
// 	return (0);
// }