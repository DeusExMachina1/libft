/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:41:53 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/12 16:33:02 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*n_dst;
	char	*n_src;
	int		i;

	n_dst = (char *)dst;
	n_src = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (++i <= (int)len)
			n_dst[len - i] = n_src[len - i];
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			n_dst[i] = n_src[i];
	}
	return (dst);
}
