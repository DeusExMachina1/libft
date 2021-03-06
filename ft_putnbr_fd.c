/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:32:05 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/03 10:01:48 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	char			d;
	unsigned int	n;

	if (c < 0)
	{
		c = c * -1;
		write(fd, "-", 1);
	}
	n = c;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	d = (n % 10) + '0';
	write(fd, &d, 1);
}
