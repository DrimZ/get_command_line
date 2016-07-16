/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 11:23:53 by agadhgad          #+#    #+#             */
/*   Updated: 2015/12/01 09:34:38 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;
	unsigned char	x;

	i = 0;
	if (!src)
		return (NULL);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	x = (unsigned long)c;
	while (i < n)
	{
		if ((*p1++ = *p2++) == x)
			return (p1);
		i++;
	}
	return (NULL);
}
