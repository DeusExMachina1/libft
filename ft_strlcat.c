/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:35:23 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/24 16:16:43 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ftstrlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = (int)ft_strlen(dst) - 1;
	j = 0;
	while (dstsize > 0)
	{
		if (j >= i)
		{
			;
		}
		dst[i + j] = src[j];
		dstsize--;
		j++;
	}
	return (i + j);
}

int	main(void)
{
	char str1[20] = "bloop ";
	char str2[20] = "bleep.";
	printf("sys funct:%lu\n", strlcat(str1, str2, 20));
	printf("str1 len:%d\n", ft_strlen(s
	printf("sys result:%s\n", str1);
	printf("str1 size:%lu\n", sizeof(str1));
	return (0);
}
