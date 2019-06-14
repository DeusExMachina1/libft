/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:10:06 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 11:25:11 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *new_ls;

	if (!(new_ls = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_ls->content = NULL;
		new_ls->content_size = 0;
	}
	else
	{
		new_ls->content_size = content_size;
		new_ls->content = malloc(content_size);
		ft_memcpy(new_ls->content, content, content_size);
	}
	new_ls->next = NULL;
	return (new_ls);
}
