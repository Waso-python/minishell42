/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:27:57 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/20 21:28:00 by pcorina          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;
	unsigned char	ch;

	ch = (unsigned char)c;
	buf = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*buf == ch)
			return (buf);
		i++;
		buf++;
	}
	return ((void *)0);
}
