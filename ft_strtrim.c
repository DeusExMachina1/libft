/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:05:25 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/30 14:36:00 by iisaacs          ###   ########.fr       */
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
	first = 0;
	last = 0;
	while (ft_isspace(s[i]))
		i++;
	first = i;
	if ((i + 1) == ft_strlen(s))
		return (NULL);
	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		i--;
	last = i;
	new_str = (char *)malloc(last - first + 2);
	new_str[last - first + 1] = '\0';
	return (ft_strncpy(new_str, &s[first], (last - first + 1)));
}
