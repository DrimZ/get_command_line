/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_command_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 01:13:59 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 01:02:06 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

static t_cmd_line	*get_cmd_line(void)
{
	static t_cmd_line	cl;

	return (&cl);
}

static void			cmd_line_update(int sig)
{
	t_cmd_line *cl;

	cl = get_cmd_line();
	cmd_line_clear(cl);
	cmd_line_render(cl);
	(void)sig;
}

static void			cmd_line_init(t_cmd_line *cl, char *prompt)
{
	ft_bzero(cl, sizeof(t_cmd_line));
	if (!(cl->chars = ft_memalloc(sizeof(t_cmd_line_char))))
		ft_error_system();
	cl->chars->c = '\0';
	cl->cursor = cl->chars;
	cl->prompt = prompt;
	cl->plen = ft_strlen(prompt);
	cl->cols = get_winsize()->ws_col;
	signal(SIGWINCH, cmd_line_update);
}

int					get_command_line(char *prompt, char **str)
{
	t_cmd_line	*cl;
	int			key;

	cl = get_cmd_line();
	cmd_line_init(cl, prompt);
	cmd_line_render(cl);
	while ((key = read_key()))
	{
		if (key == -1)
			return (-1);
		cmd_line_action(cl, key);
		if (key == ENTER_KEY)
		{
			*str = cmd_line_to_str(cl);
			return (1);
		}
	}
	return (0);
}
