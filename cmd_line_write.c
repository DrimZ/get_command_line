/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:05:05 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 00:25:07 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

void		cmd_line_write(t_cmd_line *cl, char c)
{
	t_cmd_line_char *new;

	cmd_line_clear(cl);
	if (!(new = ft_memalloc(sizeof(t_cmd_line_char))))
		ft_error_system();
	new->next = cl->cursor;
	new->c = c;
	if (cl->cursor->prev)
		cl->cursor->prev->next = new;
	else
		cl->chars = new;
	new->prev = cl->cursor->prev;
	cl->cursor->prev = new;
	++cl->len;
	cmd_line_render(cl);
}
