/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:38:29 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/10 09:23:33 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_mem;
	int		i;

	new_mem = malloc(size);
	i = 0;
	if (new_mem == '\0')
		return (NULL);
	return (ft_memset(new_mem, 0, size));
}
