#include<stdio.h>
#include<string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i = strlen(s);
	while	(i >= 0)
	{
		if	(s[i--] == c)
			return ((char *)&s[i-2]);
	}
}

int		main(void)
{
	printf("%s", ft_strrchr("sitring", 'i'));
	return (0);
}
