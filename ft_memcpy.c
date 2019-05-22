/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:10:15 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/22 08:38:10 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *n_dst;
	char *n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	while (n > 0)
	{
		*n_dst = *n_src;
		n_dst++;
		n_src++;
		n--;
	}
	return (&dst[0]);
}
