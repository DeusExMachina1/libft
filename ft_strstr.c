/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:40:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 16:30:12 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int hay_len;
	int hay_i;
	int n_i;
	int n_len;

	hay_i = -1;
	n_i = 0;
	hay_len = (int)ft_strlen(haystack);
	n_len = (int)ft_strlen(needle);
	if (!needle[n_i])
		return ((char *)haystack);
	while (++hay_i < hay_len)
	{
		while (haystack[hay_i] == needle[n_i])
		{
			hay_i++;
			n_i++;
			if (n_i == n_len)
				return ((char *)&haystack[hay_i - n_i]);
		}
		n_i = 0;
	}
	return (NULL);
}
