/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:38:29 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/29 10:21:58 by iisaacs          ###   ########.fr       */
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
	return (memset(new_mem, 0, size));
}
