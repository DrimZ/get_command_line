/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:46:31 by agadhgad          #+#    #+#             */
/*   Updated: 2015/12/01 12:44:31 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlist;

	if (!(newlist = (t_list*)malloc(sizeof(newlist))))
		return (NULL);
	newlist->content = (void *)content;
	newlist->content_size = ((content == NULL) ? 0 : content_size);
	newlist->next = NULL;
	return (newlist);
}
