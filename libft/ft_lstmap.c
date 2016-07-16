/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:33:38 by agadhgad          #+#    #+#             */
/*   Updated: 2016/01/14 18:08:08 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *beginlist;
	t_list *tmp;
	t_list *tmp2;

	if (!lst || !f)
		return (NULL);
	tmp2 = f(lst);
	if ((beginlist = ft_lstnew(tmp2->content, tmp2->content_size)))
	{
		tmp = beginlist;
		lst = lst->next;
		while (lst)
		{
			tmp2 = f(lst);
			if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
				return (NULL);
			tmp = lst->next;
			lst = lst->next;
		}
	}
	return (beginlist);
}
