/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:05:25 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 10:32:22 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		first;
	int		last;
	char	*new_str;

	i = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]))
		i++;
	first = i;
	if (i == (int)ft_strlen(s))
		return (ft_strnew(0));
	if ((i + 1) == (int)ft_strlen(s))
		return (NULL);
	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		i--;
	last = i;
	if (!(new_str = (char *)malloc(last - first + 2)))
			return (NULL);
	new_str[last - first + 1] = '\0';
	return (ft_strncpy(new_str, &s[first], (last - first + 1)));
}
