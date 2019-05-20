#include<unistd.h>

void	ft_putstr(char const *s)
{
	while(*s != '\0')
		write(1, s++, 1);
}
