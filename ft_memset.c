/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:47:02 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 11:26:46 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)b;
	while (i < (int)ft_strlen(b) && (len-- > 0))
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
