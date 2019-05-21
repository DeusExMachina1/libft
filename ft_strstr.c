/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:40:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/21 09:43:54 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *new_p;

	if (*haystack == '\0')
		return (NULL);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			new_p = haystack;
			while (*haystack != '\0')
			{
				if (*haystack != *needle)
				{
					needle = &needle[0];
					break ;
				}
				needle++;
				haystack++;
				if (*needle == '\0')
					return ((char *)new_p);
			}
		}
		haystack++;
	}
	return (NULL);
}
