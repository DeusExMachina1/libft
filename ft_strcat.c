/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:22:20 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/21 09:23:44 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < strlen(s1))
		i++;
	while (j < strlen(s2))
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[(i + j) + 1] = '\0';
	return (s1);
}
