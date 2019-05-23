/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 10:47:13 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if ((char)c == *str)
			return ((void *)str);
		str++;
		len--;
	}
	return (NULL);
}
