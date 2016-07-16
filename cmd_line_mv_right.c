/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_mv_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:46:30 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 01:17:56 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

void	cmd_line_mv_right(t_cmd_line *cl)
{
	if (!cl->cursor->next)
		return ;
	ft_putstr(tgetstr("nd", NULL));
	++cl->col;
	if (cl->col > cl->cols)
	{
		cl->col = 1;
		ft_putstr(tgetstr("cr", NULL));
		ft_putstr(tgetstr("do", NULL));
	}
	cl->cursor = cl->cursor->next;
}
