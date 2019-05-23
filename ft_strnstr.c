/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:47:46 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 10:47:58 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (haystack[++i] && len > 0)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] && len > 0 && needle != '\0')
			{
				if (haystack[i] != needle[j])
					break ;
				i++;
				j++;
				len--;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
			else
				j = 0;
		}
		len--;
	}
	return (NULL);
}
