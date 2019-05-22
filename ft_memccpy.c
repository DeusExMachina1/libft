/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:56:51 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/22 09:59:09 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int		main(void)
{
	char dst[20] = "bubber";
	char src[20] = "cr";

	printf("system funct:%s\n", memccpy(dst, src, 'e', 6));
	printf("sytem dst result:%lu %s\n", strlen(dst), dst);
	printf("my funct:%s\n", ft_memccpy(dst, src, 'e', 6));
	printf("my dst result:%lu %s\n", strlen(dst), dst);
	return (0);
}
