/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_interrupt.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:19:56 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 00:37:08 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

void	cmd_line_interrupt(t_cmd_line *cl)
{
	if (!cl->len)
		exit(0);
	if (!cl->cursor->c)
		return ;
	cmd_line_mv_right(cl);
	cmd_line_erase(cl);
}
