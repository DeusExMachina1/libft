/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:47:46 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 16:39:25 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
	while (++hay_i < hay_len && len > 0)
	{
		len--;
		while (haystack[hay_i] == needle[n_i] && len > 0)
		{
			hay_i++;
			n_i++;
			len--;
			if (n_i == n_len)
				return ((char *)&haystack[hay_i - n_i]);
		}
		n_i = 0;
	}
	return (NULL);
}
