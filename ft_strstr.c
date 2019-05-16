#include<stdio.h>
#include<string.h>

char	*ft_strstr(const char* haystack, const char* needle)
{
	const char	*new_p;
	const char	*first_letter = needle; 
	const char	*hay = haystack;

	if	(*haystack == '\0')
		return (NULL);
	while	(*haystack != '\0')
	{
		if	(*haystack == *needle)
		{
			new_p = haystack;
			while	(*haystack != '\0')
			{
				if	(*haystack != *needle)
				{
					needle = first_letter;
					break;
				}
				needle++;
				haystack++;
				if	(*needle == '\0')
					return	((char *)new_p);
			}
		}
		haystack++;
	}
	return	(NULL);
}

int		main(void)
{
	char hay[] = "Soundsd";
	char needle[] = "sd";

	printf("%s", strstr(hay, needle));
	return (0);
}
