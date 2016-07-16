/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:52:39 by agadhgad          #+#    #+#             */
/*   Updated: 2015/11/27 19:26:20 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		s2 = malloc(sizeof(char) * ft_strlen(s));
		while (s[i] != 0)
		{
			s2[i] = f(i, s[i]);
			i++;
		}
		return (s2);
	}
	return (NULL);
}
