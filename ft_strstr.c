/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:40:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/10 14:52:42 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** i[0] is haystack index, i[1] is needle index, i[2] is a temp variable.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	hay_i;
	int	n_i;
	int	found;

	hay_i = 0;
	n_i = 0;
	found = 0;
	if (!needle[n_i])
		return ((char *)haystack);
	while (haystack[hay_i])
	{
		while (haystack[hay_i] == needle[n_i])
		{
			(found == 0) ? found = hay_i : 0;
			hay_i++;
			n_i++;
			(haystack[hay_i] != needle[n_i]) ? hay_i = found + 1 : 0;
			if (n_i == (int)ft_strlen(needle))
				return ((char *)&haystack[found]);
		}
		n_i = 0;
		hay_i++;
	}
	return (NULL);
}

int		main()
{
	char str[] = "Ceci n'est pas une pipe.";
	char str1[] = "une";

	printf("result: **%s**\n", strstr(str, str1));
}
