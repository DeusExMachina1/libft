/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:27:11 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 10:45:25 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < strlen(s1))
		i++;
	while (j < strlen(s2) && n > 0)
	{
		s1[i + j] = s2[j];
		j++;
		n--;
	}
	s1[i + j + 1] = '\0';
	return (s1);
}
