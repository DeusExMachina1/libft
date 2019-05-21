/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:38:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/21 08:41:44 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_strchr(const char *str, int c)
{
	int len;

	len = strlen(str);
	while (len > 0)
	{
		printf("%d\n", len);
		if ((char)c == *str)
			return ((void *)str);
		str++;
		len--;
	}
	return (NULL);
}
