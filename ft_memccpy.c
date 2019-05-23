/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:56:51 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 10:42:46 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	int		i;
	char	*n_dst;
	char	*n_src;

	i = 0;
	n_dst = (char *)dst;
	n_src = (char *)src;
	while (c != n_src[i] && n > 0)
	{
		n_dst[i] = n_src[i];
		i++;
		n--;
	}
	if (n == 0)
		return (NULL);
	i++;
	return (&n_dst[i]);
}
