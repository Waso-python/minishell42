/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:30:50 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/20 21:30:51 by pcorina          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*buf_dst;
	unsigned char	*buf_src;

	i = 0;
	buf_dst = (unsigned char *)dst;
	buf_src = (unsigned char *)src;
	if (buf_dst < buf_src)
	{
		while (i < len)
		{
			buf_dst[i] = buf_src[i];
			i++;
		}
	}
	else if (buf_dst > buf_src)
	{
		while (i != len)
		{
			buf_dst[len - 1 - i] = buf_src[len - 1 - i];
			i++;
		}
	}
	return (dst);
}
