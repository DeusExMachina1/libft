/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:40:49 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/12 12:07:54 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	found_funct(int *found, int *hay_i)
{
	if (*found != -1)
	{
		*hay_i = *found + 1;
		*found = -1;
	}
}

char		*ft_strstr(const char *hay, const char *ndl)
{
	int	n_i;
	int	hay_i;
	int	found;

	n_i = 0;
	hay_i = -1;
	found = -1;
	if (hay == ndl)
		return ((char *)hay);
	if (!ndl[n_i])
		return ((char *)hay);
	while (hay[++hay_i])
	{
		while (hay[hay_i] == ndl[n_i])
		{
			(found == -1) ? found = hay_i : 0;
			n_i++;
			hay_i++;
			if (!ndl[n_i])
				return ((char *)&hay[found]);
		}
		found_funct(&found, &hay_i);
		n_i = 0;
	}
	return (NULL);
}
