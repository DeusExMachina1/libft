#include<unistd.h>

void	putchar_fd(int c, FILE *stream)
{
	write(stream, &c, 1);
}
