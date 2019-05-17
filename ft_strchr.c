#include<string.h>
#include<stdio.h>

void	*ft_strchr(const char *str, int c)
{
	if	(c == '\0')
	{
		str = str + ft_strlen(str);
		return (str);
	}
	while	(!(*str))
	{
		if	(c == *str)
			return (str);
		str++;
	}
}
