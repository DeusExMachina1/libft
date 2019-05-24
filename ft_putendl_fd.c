/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:54:54 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/24 11:06:14 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int	len;

	len = (int)ft_strlen(s);
	while (len > 0)
	{
		write(fd, s, 1);
		len--;
		s++;
	}
	write(fd, "\n", 1);
}
