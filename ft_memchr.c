/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:13:19 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 17:44:12 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	chr;
	int		i;
	char	*new_s;

	i = 0;
	chr = (unsigned char)c;
	new_s = (char *)s;
	while (n > 0)
	{
		if (new_s[i] == chr)
			return ((void *)&s[i]);
		i++;
		n--;
	}
	return (NULL);
}
