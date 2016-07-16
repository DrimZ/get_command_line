/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:30:08 by agadhgad          #+#    #+#             */
/*   Updated: 2015/11/30 15:40:22 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	if (s && f)
	{
		s2 = malloc(sizeof(char) * ft_strlen(s));
		while (s[i] != 0)
		{
			s2[i] = f(s[i]);
			i++;
		}
		return (s2);
	}
	return (NULL);
}
