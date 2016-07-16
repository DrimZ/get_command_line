/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:48:40 by agadhgad          #+#    #+#             */
/*   Updated: 2015/12/01 13:30:46 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
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
