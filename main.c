/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:00:27 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/16 02:57:35 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

int		main(void)
{
	static char prompt[] = "42sh $> ";
	char		*str;

	tgetent(NULL, getenv("TERM"));
	str = NULL;
	while (get_command_line(prompt, &str))
	{
		ft_putendl(str);
		if (!ft_strcmp(str, "exit"))
			break ;
	}
	return (0);
}
