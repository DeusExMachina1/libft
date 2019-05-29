/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:57:40 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/29 17:21:19 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{:w
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc(len);
	if (!new_str)
		return (NULL);
	ft_strncpy(new_str, &s[start], len);
	return (new_str);
}

int		main(void)
{
	char *s = "STRING ";
	char *ns = "CONCATED";
	printf(
	return (0);
}
