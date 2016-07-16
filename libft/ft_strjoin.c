/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 11:23:53 by sdurr             #+#    #+#             */
/*   Updated: 2016/01/10 14:09:21 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	size_t		i;
	size_t		y;

	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2)));
	i = 0;
	y = 0;
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (y < ft_strlen(s2))
	{
		s[i + y] = s2[y];
		y++;
	}
	return (s);
}
