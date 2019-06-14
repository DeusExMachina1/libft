/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:57:40 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 10:34:55 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_str;

	i = 0;
	if (!s)
		return (NULL);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	ft_strncpy(new_str, &s[start], len);
	new_str[len] = '\0';
	return (new_str);
}
