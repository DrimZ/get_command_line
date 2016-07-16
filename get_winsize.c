/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_winsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:54:14 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 00:54:29 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

struct winsize	*get_winsize(void)
{
	static struct winsize ws;

	ioctl(0, TIOCGWINSZ, &ws);
	return (&ws);
}
