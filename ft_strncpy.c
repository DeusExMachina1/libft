/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:21:56 by iisaacs           #+#    #+#             */
/*   Updated: 2019/05/21 12:28:48 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int dst_b;

	i = 0;
	dst_b = sizeof(dst);
	while (*src != '\0' && len > 0)
	{
		dst[i++] = *src;
		src++;
		len--;
		dst_b--;
	}
	while (dst_b > 0)
	{
		dst[i++] = '\0';
		dst_b--;
	}
	return (dst);
}
