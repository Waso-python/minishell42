/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:29:31 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/21 19:00:27 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buf;
	char	*result;

	result = ((void *)0);
	buf = (char *)s;
	while (*buf != '\0')
	{
		if (*buf == (char)c)
			result = buf;
		buf++;
	}
	if (c == '\0')
		result = buf;
	return (result);
}
