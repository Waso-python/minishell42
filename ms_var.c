/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_var.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:34:32 by pcorina           #+#    #+#             */
/*   Updated: 2022/04/30 13:23:35 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	*find_variable(t_list *var, char *line)
{
	t_list	*buf;

	buf = var;
	while (buf)
	{
		if (!ft_memcmp(buf->content, line, ft_strlen(line) + 1) \
		|| ft_memcmp(buf->content, line, ft_strlen(line) + 1) == '=')
			return (buf);
		buf = buf->next;
	}
	return (NULL);
}

char	*variable_value(t_list *var)
{
	char	*str;

	if (!var)
		return (NULL);
	str = var->content;
	if (ft_memchr(str, '=', ft_strlen(str)) && var->vision)
		return (ft_memchr(str, '=', ft_strlen(str)) + 1);
	else
		return (NULL);
}
