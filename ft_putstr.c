#include<unistd.h>

void	ft_putstr(char const *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	char str[] = "Hello";
	ft_putstr(str);

}
