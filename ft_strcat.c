/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:22:20 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 10:45:01 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = 0;
	while (j < ft_strlen(s2))
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[(i + j) + 1] = '\0';
	return (s1);
}
