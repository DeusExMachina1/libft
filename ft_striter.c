#include<stdio.h>
#include<unistd.h>
#include<string.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int i = 0;
	int len = strlen(s);
	char c;
	while	(i < len)
	{
		c = s[i];
		f(&c);
		i++;
	}
}
