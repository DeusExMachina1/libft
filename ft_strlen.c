#include<stdio.h>

int	ft_strlen(char const *str)
{
	int n;
	n = 0;
	while(*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

int main()
{
	char str[] = "game";
	printf("%d", ft_strlen(str));

	return (0);
}
