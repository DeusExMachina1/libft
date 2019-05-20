#include<string.h>
#include<stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *new_p;

	while	((*haystack != '\0') && (len > 0))     //Iterate through 'haystack'
	{
		if	(*haystack == *needle)  //If haystack[x] == needle[x], init 'new_p' to haystack[x]
		{
			new_p = (char *)haystack;
			printf("here initializing new_p\n");
			while	((*haystack != '\0') && (len > 0))	//continue iterating through 'haystack' checking if entire 'needle' in 'haystack'.
			{
				printf("here in second while loop\n");
				if	(*needle != *haystack)  //If not, init 'needle' to address of needle[0], then break, and continue iterating 'haystack'.
				{
					needle = &needle[0];
					break;
				}
				haystack++;
				needle++;
				len--;
				if	(*needle == '\0') //Once 'needle' hits null character (entire 'needle' is in 'haystack') return 'new_p'.
					return	(new_p);
			}
		}
		haystack++;
		len--;
	}
	return	(NULL);  //return NULL if haystack[x] == '\0' and if 'needle' is not found in 'haystack'.
}

int		main(void)
{
	//ft_strnstr("staystring", "tr", 7);
	printf("%s", ft_strnstr("staystring", "r", 7));
	return (0);
}
