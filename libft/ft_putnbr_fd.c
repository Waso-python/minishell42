/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:28:31 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/20 21:28:36 by pcorina          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse(char *str, int i, int fd)
{
	int		j;
	char	ch;

	j = 0;
	i--;
	while (i > j)
	{
		ch = str[j];
		str[j] = str[i];
		str[i] = ch;
		j++;
		i--;
	}
	ft_putstr_fd(str, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	long	l;
	int		i;

	l = n;
	if (l < 0)
		write(fd, "-", 1);
	if (l < 0)
		l = -l;
	i = 0;
	while (l != 0 || i == 0)
	{
		str[i] = l % 10 + 48;
		i++;
		l /= 10;
	}
	str[i] = '\0';
	ft_reverse(str, i, fd);
}
