/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:47:46 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 13:31:27 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	g_found;

static void	found_funct(int *hay_i, int *t_len, size_t *len, int n)
{

	if (n == 0 && g_found == -1)
	{
		g_found = *hay_i;
		*t_len = *len;
	}
	else if (n == 1 && g_found != -1)
	{
		*hay_i = g_found + 1;
		g_found = -1;
		*len = *t_len;
	}
}

char		*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	int	hay_i;
	int	n_i;
	int	t_len;

	hay_i = -1;
	n_i = 0;
	g_found = -1;
	if (ft_strlen(ndl) == 0)
		return ((char *)hay);
	while (hay[++hay_i] && len > 0)
	{
		while (hay[hay_i] == ndl[n_i] && len > 0)
		{
			found_funct(&hay_i, &t_len, &len, 0);
			hay_i++;
			len--;
			if (!ndl[++n_i])
				return ((char *)&hay[g_found]);
		}
		found_funct(&hay_i, &t_len, &len, 1);
		n_i = 0;
		len--;
	}
	return (NULL);
}
