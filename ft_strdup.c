/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:34:01 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/23 10:44:24 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *s1)
{
	char	*new_s;
	int		len;
	int		i;

	i = 0;
	len = strlen(s1);
	new_s = (char *)malloc(len + 1);
	while (len > 0)
	{
		new_s[i] = s1[i];
		len--;
		i++;
	}
	new_s[i] = '\0';
	return ((void *)new_s);
}
