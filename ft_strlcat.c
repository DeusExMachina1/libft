#include <string.h>
#include <stdio.h>

size_t	ftstrlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dstsize > 0)
	{

		dstsize--;
	}
	return (i + j);
}

int	main(void)
{
	char str1[20] = "bloop ";
	char str2[20] = "bleep.";
	printf("sys funct:%lu\n", strlcat(str1, str2, 30));
	printf("sys result:%s\n", str1);
	printf("str1 size:%lu\n", sizeof(str1));
	return (0);
}

