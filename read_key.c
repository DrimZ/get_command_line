/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 01:16:06 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/16 03:44:21 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

static void	toggle_term(void)
{
	static int				status = -1;
	static struct termios	term;
	static struct termios	ncterm;

	if (status == -1)
	{
		tcgetattr(0, &term);
		ft_memcpy(&ncterm, &term, sizeof(struct termios));
		ncterm.c_lflag &= ~(ICANON | ECHO);
		ncterm.c_cc[VMIN] = 1;
		ncterm.c_cc[VTIME] = 0;
		status = 0;
	}
	tcsetattr(0, 0, (status) ? &term : &ncterm);
	status = (status) ? 0 : 1;
}

static int	get_keyval(char *buff)
{
	int val;

	val = 0;
	while (*buff)
		val += *(buff++);
	return (val);
}

int			read_key(void)
{
	static char	buff[10];
	int			ret;

	bzero(buff, sizeof(char) * 10);
	toggle_term();
	ret = read(0, buff, 7);
	toggle_term();
	return ((ret == -1) ? -1 : get_keyval(buff));
}
