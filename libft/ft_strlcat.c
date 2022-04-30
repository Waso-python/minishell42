/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:29:09 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/21 18:52:51 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int			i;
	int			j;
	size_t		len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	j = 0;
	if (len_dst < dstsize - 1 && dstsize > 0)
	{
		while (dst[i])
			i++;
		while (len_dst + j < dstsize - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (len_dst > dstsize)
		return (dstsize + ft_strlen(src));
	return (len_dst + ft_strlen(src));
}
