/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:22:31 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 10:20:30 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
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
	while (s[*i] == c && s[*i])
		*i += 1;
	*begin = *i;
	while (s[*i] != c && s[*i])
	{
		len++;
		*i += 1;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		len;
	int		num;
	int		begin;
	int		i[2];

	i[0] = 0;
	i[1] = 0;
	if (!s)
		return (NULL);
	num = word_count(s, c);
	if (!(words = (char **)malloc(sizeof(char **) * word_count(s, c) + 1)))
		return (NULL);
	while (i[0] < num)
	{
		len = length_counter(s, c, &i[1], &begin);
		if (!(*(words + i[0]) = (char *)malloc(len + 1)))
			return (NULL);
		*(words + i[0]) = ft_strsub(s, begin, len);
		i[0] += 1;
	}
	*(words + i[0]) = 0;
	return (words);
}
