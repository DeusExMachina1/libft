#include<stdio.h>

int	ft_toupper(int c)
{
	int upper_c;
	upper_c = c;
	if	(c >= 'a' && c <= 'z')
	{
		upper_c = c - 32;
	}
	return (upper_c);
}
