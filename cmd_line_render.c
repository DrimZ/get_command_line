/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_render.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:35:25 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 01:02:19 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

static void	print_prompt(t_cmd_line *cl)
{
	int i;

	i = 0;
	cl->col = 1;
	while (cl->prompt[i])
	{
		ft_putchar(cl->prompt[i]);
		++i;
		++cl->col;
	}
}

void		cmd_line_render(t_cmd_line *cl)
{
	t_cmd_line_char *temp;

	cl->cols = get_winsize()->ws_col;
	print_prompt(cl);
	temp = cl->cursor;
	cl->cursor = cl->chars;
	while (cl->cursor->next)
	{
		++cl->col;
		if (cl->col > cl->cols)
			cl->col = 1;
		ft_putchar(cl->cursor->c);
		cl->cursor = cl->cursor->next;
	}
	while (temp != cl->cursor)
		cmd_line_mv_left(cl);
}
