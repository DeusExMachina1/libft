/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisaacs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:19:38 by iisaacs           #+#    #+#             */
/*   Updated: 2019/06/14 10:07:49 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_ret(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int result;

	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			result = (unsigned char)*s1 - (unsigned char)*s2;
			return (check_ret(result));
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	return (check_ret((unsigned char)*s1 - (unsigned char)*s2));
}
