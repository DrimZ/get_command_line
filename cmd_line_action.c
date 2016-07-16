/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_action.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 01:32:00 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 01:21:59 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

static void			cmd_line_end(t_cmd_line *cl)
{
	cmd_line_mv_end(cl);
	ft_putchar('\n');
}

t_cmd_line_action	*get_actions(void)
{
	static t_cmd_line_action actions[GCL_NB_ACTIONS] = {
		{LEFT_KEY, cmd_line_mv_left}, {RIGHT_KEY, cmd_line_mv_right},
		{CTRL_UP_KEY, cmd_line_mv_up}, {CTRL_DOWN_KEY, cmd_line_mv_down},
		{HOME_KEY, cmd_line_mv_home}, {END_KEY, cmd_line_mv_end},
		{CTRL_LEFT_KEY, cmd_line_pword}, {CTRL_RIGHT_KEY, cmd_line_nword},
		{BACKSPACE_KEY, cmd_line_erase}, {ENTER_KEY, cmd_line_end},
		{CTRL_U, cmd_line_rm_chars}, {CTRL_D, cmd_line_interrupt}
	};

	return ((t_cmd_line_action *)actions);
}

void				cmd_line_action(t_cmd_line *cl, int key)
{
	t_cmd_line_action	*actions;
	int					i;

	i = 0;
	actions = get_actions();
	while (i < GCL_NB_ACTIONS)
	{
		if (key == actions[i].key)
		{
			actions[i].act(cl);
			break ;
		}
		++i;
	}
	if (ft_isprint(key) && key != ENTER_KEY)
		cmd_line_write(cl, (char)key);
}
