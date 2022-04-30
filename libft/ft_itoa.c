/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:34:17 by pcorina           #+#    #+#             */
/*   Updated: 2022/01/15 20:37:11 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_len(long n)
{
	int	i;

	i = 1;
	if (n < 0 && ++i == 2)
		n = -n;
	while (n >= 10 && i++)
		n /= 10;
	return (i);
}

void	line_fill(char *str, int *n, int *count)
{
	int	i;

	i = *n % 10;
	if (i < 0)
		i = -i;
	*str = i + 48;
	*n /= 10 ;
	*count -= 1;
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*str;

	count = digit_len(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return ((void *)0);
	i = 0;
	if (n < 0)
		str[0] = '-';
	str[count] = '\0';
	count--;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
		line_fill(&str[count], &n, &count);
	return (str);
}
