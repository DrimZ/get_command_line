/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 23:40:55 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/16 23:50:56 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

char	*cmd_line_to_str(t_cmd_line *cl)
{
	t_cmd_line_char	*current;
	char			*ret;
	int				i;

	if (!(ret = ft_strnew(cl->len)))
		ft_error_system();
	current = cl->chars;
	i = 0;
	while (current)
	{
		ret[i++] = current->c;
		current = current->next;
	}
	return (ret);
}
