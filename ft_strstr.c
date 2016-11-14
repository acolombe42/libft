/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:27:36 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/14 14:36:29 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	size_t	a;

	a = 0;
	if (little[a] == '\0')
		return ((char*)big);
	while (big[a])
	{
		i = 0;
		j = a;
		while (little[i] == big[j] && little[i])
		{
			i++;
			j++;
		}
		if (i == (size_t)ft_strlen(little))
			return ((char*)&big[a]);
		a++;
	}
	return (NULL);
}
