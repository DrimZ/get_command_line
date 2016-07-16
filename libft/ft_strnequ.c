/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:12:41 by agadhgad          #+#    #+#             */
/*   Updated: 2015/12/01 13:32:54 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0 || s2[0] == '\0')
		return (1);
	if (s1 && s2 && n > 0)
	{
		while (i < n - 1 && (s1[i] && s2[i]))
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (0);
		}
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}
