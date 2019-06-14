/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:10:15 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/12 11:04:25 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *n_dst;
	char *n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*n_dst = *n_src;
		n_dst++;
		n_src++;
		n--;
	}
	return (dst);
}
