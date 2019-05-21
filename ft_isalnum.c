/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:05:24 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/21 08:06:36 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z') ||
		(c <= '0' && c >= '9'))
		return (1);
	return (0);
}
