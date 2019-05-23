/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:41:53 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 17:44:51 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*n_dst;
	char	*n_src;
	char	*temp;
	int		i;

	n_dst = (char *)dst;
	n_src = (char *)src;
	temp = (char *)malloc(sizeof(src) + 1);
	i = -1;
	while (++i < (int)len)
		temp[i] = n_src[i];
	while (len > 0)
	{
		*n_dst = *temp;
		n_dst++;
		temp++;
		len--;
	}
	return (dst);
}
