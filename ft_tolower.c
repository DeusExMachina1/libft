#include<stdio.h>

int ft_tolower(int c)
{
	int lower_c;
	lower_c = c;
	if (c >= 'A' && c <= 'Z')
		lower_c += 32;
	return (lower_c);
}
