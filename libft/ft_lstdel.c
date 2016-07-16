/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:24:36 by agadhgad          #+#    #+#             */
/*   Updated: 2015/12/01 12:22:35 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *lstnxt;

	lst = *alst;
	while (lst)
	{
		lstnxt = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = lstnxt;
	}
	*alst = NULL;
}
