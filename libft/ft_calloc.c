/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:34:17 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/20 20:43:06 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*str;
	char	*buf;

	i = 0;
	str = malloc(count * size);
	if (!str)
		return ((void *)0);
	buf = str;
	while (i < count * size)
	{
		buf[i] = '\0';
		i++;
	}
	return (str);
}
