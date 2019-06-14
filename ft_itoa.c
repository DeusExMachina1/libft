/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:37:22 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/12 10:59:47 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_alloc(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	int				i;
	int				temp_n;
	int				mem_size;
	unsigned int	new_n;
	char			*res;

	temp_n = n;
	mem_size = num_alloc(n);
	if (!(res = (char *)malloc(mem_size + 1)))
			return (NULL);
	i = mem_size - 1;
	if (is_neg(temp_n))
		n *= -1;
	new_n = (unsigned int)n;
	while (i >= is_neg(temp_n))
	{
		res[i--] = (new_n % 10) + 48;
		new_n /= 10;
	}
	if (is_neg(temp_n))
		res[0] = '-';
	res[mem_size] = '\0';
	return (res);
}
