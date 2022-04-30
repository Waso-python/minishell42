/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:15:11 by pcorina           #+#    #+#             */
/*   Updated: 2022/01/28 14:07:50 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int checkfree)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return ((void *)0);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		str[i + j] = s1[i];
		++i;
	}
	while (s2 && s2[j])
	{
		str[i + j] = s2[j];
		++j;
	}
	str[i + j] = '\0';
	if (s1 && !(checkfree % 2))
		free(s1);
	if (s2 && !(checkfree % 3))
		free(s2);
	return (str);
}

// 2 - free s1 | 3 - free s2 | 6 - free s1 & s2
