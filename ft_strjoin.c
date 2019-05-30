/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:29:03 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/30 09:04:23 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len;
	int		i;
	int		j;


	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(len);
	if (!new_str)
		return (NULL);
	new_str = ft_strcat((char *)s1, s2);
	return (new_str);
}

int		main(void)
{
	char str1[30] = "sugar, spice";
	char *str2 = " everything nice";
	char *f_str; 
	printf("size of s1: %lu\n", ft_strlen(str1)); 
	printf("size of s2: %lu\n", ft_strlen(str2)); 
	f_str = ft_strjoin(str1, str2);
	printf("Joined string: %s", f_str);
	return (0);
}
