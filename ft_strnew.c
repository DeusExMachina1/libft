/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:07:04 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 10:32:24 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	while (i < (int)size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
