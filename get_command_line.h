/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_command_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-bevi <qle-bevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 01:11:59 by qle-bevi          #+#    #+#             */
/*   Updated: 2016/07/17 00:53:50 by qle-bevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_COMMAND_LINE_H
# define GET_COMMAND_LINE_H
# define GCL_NB_ACTIONS 12
# include <ncurses.h>
# include <term.h>
# include <termios.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/ioctl.h>
# include "libft.h"
# include "keys.h"

typedef struct s_cmd_line			t_cmd_line;
typedef struct s_cmd_line_action	t_cmd_line_action;
typedef struct s_cmd_line_char		t_cmd_line_char;

struct								s_cmd_line
{
	char			*prompt;
	int				plen;
	int				cols;
	int				col;
	int				len;
	t_cmd_line_char	*chars;
	t_cmd_line_char	*cursor;
};

struct								s_cmd_line_action
{
	int		key;
	void	(*act)(t_cmd_line *);
};

struct								s_cmd_line_char
{
	char			c;
	t_cmd_line_char *prev;
	t_cmd_line_char *next;
};

int									get_command_line(char *prompt, char **dest);
void								cmd_line_action(t_cmd_line *cl, int key);
void								cmd_line_interrupt(t_cmd_line *cl);
void								cmd_line_mv_left(t_cmd_line *cl);
void								cmd_line_mv_right(t_cmd_line *cl);
void								cmd_line_mv_up(t_cmd_line *cl);
void								cmd_line_mv_down(t_cmd_line *cl);
void								cmd_line_mv_home(t_cmd_line *cl);
void								cmd_line_mv_end(t_cmd_line *cl);
void								cmd_line_nword(t_cmd_line *cl);
void								cmd_line_pword(t_cmd_line *cl);
void								cmd_line_clear(t_cmd_line *cl);
void								cmd_line_rm_chars(t_cmd_line *cl);
void								cmd_line_write(t_cmd_line *cl, char c);
void								cmd_line_erase(t_cmd_line *cl);
void								cmd_line_render(t_cmd_line *cl);
char								*cmd_line_to_str(t_cmd_line *cl);
int									read_key(void);
struct winsize						*get_winsize(void);
#endif
