/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:22:31 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/07 17:18:13 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_counter(char const *s, char c)
{
	int i;
	int	count;
	int	is_w;

	i = 0;
	count = 0;
	is_w = 0;
	while (*(s + i) == c)
		i++;
	while (*(s + i))
	{

		if (*(s + i) == c)
			is_w = 0;
		if (*(s + i) != c && is_w == 0)
		{
			count++;
			is_w = 1;
		}
		i++;
	}
	return (count);
}

static int	length_counter(char const *s, char c, int *i, int *begin)
{
	int len;

	len = 0;
	while (*(s + *i) == c && *(s + *i))
		*i += 1;
	*begin = *i;
	while (*(s + *i) != c && *(s + *i))
	{
		len++;
		*i += 1;
	}
	return (len);
}

/*void	print_array(char **s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
			printf("%d: %s\n", i, *(s + i));
			i++;
	}
}*/

char	**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		len;
	int		num;
	int		begin;
	int		i;
	int		j;

	i = 0;
	j = 0;
	num = word_counter(s, c);
	if (!(words = (char **)malloc(word_counter(s, c) + 1)))
		return (NULL);
	while (i < num)
	{
		len = length_counter(s, c, &j, &begin);
		if(!(*(words + i) = (char *)malloc(len + 1)))
			return (NULL);
		*(words + i) = ft_strsub(s, begin, len);
		i++;
	}
	*(words + i) = 0;
	return (words);
}

int		main()
{
	ft_strsplit("**fuck***off**world***you**gave*me*nothing******world****fuck*offfff****", '*');

	return (0);
}
