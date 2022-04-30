/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:28:55 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/21 18:59:50 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*buf;

	buf = (char *)s;
	while (*buf)
	{
		if (*buf == (char)c)
			return (buf);
		buf++;
	}
	if (c == '\0')
		return (buf);
	return ((void *)0);
}
