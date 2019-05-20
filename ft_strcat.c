#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i = 0;
	int j = 0;

	while	(i < strlen(s1))
		i++;
	while	(j < strlen(s2))
	{
		s1[i+j] = s2[j];
		j++;
	}
	s1[(i+j)+1] = '\0';
	return	(s1);
}
