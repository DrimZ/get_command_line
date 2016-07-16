/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 11:23:53 by sdurr             #+#    #+#             */
/*   Updated: 2015/12/28 18:34:05 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_bczero(void *s, size_t n, char c)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
}

char			*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = malloc(sizeof(char*) * (size))))
		return (0);
	ft_bczero(s, size, '\0');
	return (s);
}
