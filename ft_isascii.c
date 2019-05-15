#include<stdio.h>

int ft_isascii(int c)
{
	if	((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
