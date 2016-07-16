/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadhgad <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 11:23:53 by sdurr             #+#    #+#             */
/*   Updated: 2016/01/16 15:25:19 by agadhgad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	size_t i;
	size_t y;

	i = 0;
	if (aiguille[0] == '\0')
		return (char *)(meule_de_foin);
	while (meule_de_foin[i] != '\0')
	{
		if (meule_de_foin[i] == aiguille[0])
		{
			y = 0;
			while ((meule_de_foin[i + y] == aiguille[y]) && aiguille[y])
				y++;
			if (y == ft_strlen(aiguille)
				|| (meule_de_foin[i + y] == '\0' && aiguille[y] == '\0'))
				return (char*)(&meule_de_foin[i]);
		}
		i++;
	}
	return (NULL);
}
