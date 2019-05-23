/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 13:50:19 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str) + 1;
	while (len > 0)
	{
		if ((char)c == *str)
			return ((void *)str);
		str++;
		len--;
	}
	return (NULL);
}
