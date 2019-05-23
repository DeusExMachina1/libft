/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:40:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 15:16:21 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;
	int hay_i;
	int n_i;

	hay_i = 0;
	n_i = 0;
	len = (int)ft_strlen(haystack);
	while (hay_i < len)
	{
		while (haystack[hay_i] == needle[n_i])
		{
			if (n_i == (int)ft_strlen(needle))
				return ((char *)&haystack[hay_i - n_i]);
			hay_i++;
			n_i++;
		}
		n_i = 0;
		hay_i++;
	}
	return (NULL);
}

int		main(void)
{
	char *str1 = "The all and powerfull Noodle Monster";
	char *str2 = "Noodle";
	printf("%s", ft_strstr(str1, str2));
	return (0);
}
