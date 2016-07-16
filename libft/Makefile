# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 17:07:20 by agadhgad          #+#    #+#              #
#    Updated: 2016/04/01 18:58:06 by agadhgad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_tolower.c ft_toupper.c ft_strlen.c \
	  ft_memset.c ft_strcpy.c ft_isascii.c ft_isalpha.c ft_isdigit.c \
	  ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl.c ft_putendl_fd.c ft_strdup.c ft_bzero.c ft_putnbr.c \
	  ft_strchr.c ft_strrchr.c ft_atoi.c ft_strdel.c ft_memcpy.c \
	  ft_memalloc.c ft_strclr.c ft_strncpy.c ft_memccpy.c ft_memmove.c \
	  ft_memchr.c ft_memcmp.c ft_strcat.c ft_strncat.c ft_strlcat.c \
	  ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_memdel.c \
	  ft_strnew.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	  ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	  ft_strsplit.c ft_itoa.c ft_putnbr_fd.c ft_lstnew.c ft_lstiter.c \
	  ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstmap.c ft_putstr_dbcote.c \
	  ft_puttab.c ft_printf.c ft_printf_find.c \
	  ft_printf_find2.c ft_printf_flag.c ft_litoa.c ft_putw.c ft_putc.c \
	  ft_printf_printv.c ft_printf_printc.c ft_printf_utils.c \
	  ft_printf_bonus.c ft_printf_flag2.c ft_putc2.c ft_latoi.c \
	  ft_dela_to_b.c ft_tlen.c \
	  a_clear.c  a_event.c  a_handle.c a_handle2.c a_mode.c \
	  a_print.c  a_screen.c a_listener.c ft_error_system.c ft_tabdel.c ft_isspace.c ft_size_tab.c ft_strcolor_fd.c get_next_line.c
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): ./libft.h $(SRC)
	$(CC) $(CFLAGS) -I . -c $(SRC)

.PHONY: clean fclean re

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
