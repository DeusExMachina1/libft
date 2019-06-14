/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:57:36 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 10:12:29 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_int(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	return (0);

}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (n-- <= 0)
			break ;
		if (*s1 != *s2)
		{
			return (check_int((unsigned char)*s1 - (unsigned char)*s2));
		}
		s1++;
		s2++;
	}
	return (0);
}
