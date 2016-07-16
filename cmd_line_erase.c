/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_erase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:05:05 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 00:24:59 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

void	cmd_line_erase(t_cmd_line *cl)
{
	t_cmd_line_char *temp;

	if (!cl->cursor->prev)
		return ;
	temp = cl->cursor->prev;
	cmd_line_clear(cl);
	if (temp->prev)
	{
		temp->prev->next = cl->cursor;
		cl->cursor->prev = temp->prev;
	}
	else
	{
		cl->chars = cl->cursor;
		cl->cursor->prev = NULL;
	}
	free(temp);
	--cl->len;
	cmd_line_render(cl);
}
