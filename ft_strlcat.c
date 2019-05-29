/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:35:23 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/29 08:44:55 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int len;
	int i;
	int j;

	j = 0;
	i = 0;
	len = (int)ft_strlen(dst);
	while (dst[i] != '\0' && len > dstsize)
		i++;
	//len = 
	while (dst[i + j] == '\0' && 
}*/

int		main(void)
{
	char	str1[30] = "hi harry, ";
	char	*str2 = "you are such a dick";
	printf("result: %lu\n", strlcat(str1, str2, 11));
	printf("dest res: %s**\n", str1);
	return (0);
}
