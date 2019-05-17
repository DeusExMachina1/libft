#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t size)
{
	size_t i;
	char *new_s;
	new_s = s;
	i = 0;
	while (i < size)
	{
		new_s[i++] = '\0';
	}
}
