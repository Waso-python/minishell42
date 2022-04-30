/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:29:35 by pcorina           #+#    #+#             */
/*   Updated: 2021/12/22 13:44:29 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	equal(char ch, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	search_start(char *s1, char *set)
{
	int	i;

	i = 0;
	while (equal(s1[i], set) && s1[i])
		i++;
	if (i == (int)ft_strlen(s1))
		return (0);
	return (i);
}

int	search_end(char *s1, char *set)
{
	int	ind_s1;
	int	ind_set;
	int	i;

	ind_s1 = (int)ft_strlen(s1) - 1;
	ind_set = (int)ft_strlen(set) - 1;
	i = 0;
	while (equal(s1[ind_s1 + i], set) && ind_s1 + i > 0)
		i--;
	return (ind_s1 + i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;
	int		j;

	if (!s1)
		return ((void *)0);
	start = search_start((char *)s1, (char *)set);
	end = search_end((char *)s1, (char *)set);
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return ((void *)0);
	i = 0;
	j = 0;
	while (i <= end && end != 0)
	{
		if (i >= start)
			str[j++] = s1[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
