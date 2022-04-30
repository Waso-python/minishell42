/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:28:08 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/20 21:28:09 by pcorina          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*buf_dst;
	unsigned char	*buf_src;

	buf_dst = (unsigned char *)dst;
	buf_src = (unsigned char *)src;
	i = 0;
	if (dst == (void *)0 && src == (void *)0)
		return ((void *)0);
	while (i < n)
	{
		*buf_dst++ = *buf_src++;
		i++;
	}
	return (dst);
}
