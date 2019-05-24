/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 07:41:24 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/24 07:39:53 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	str = (char *)s;
	len = (int)ft_strlen(s);
	while (i < len && n-- > 0)
	{
		str[i] = 0;
		i++;
	}
}
