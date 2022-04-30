/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorina <pcorina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:34:17 by pcorina           #+#    #+#             */
/*   Updated: 2021/10/20 20:43:06 by pcorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;
	t_list	*list;

	list = *lst;
	while (list)
	{
		save = list -> next;
		if (list -> content)
			del(list -> content);
		free(list);
		list = save;
	}
	*lst = ((void *)0);
}
