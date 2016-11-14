/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:37:07 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/14 18:19:36 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
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
		while (little[i] == big[j] && little[i] && j <= n)
		{
			i++;
			j++;
		}
		if (j <= n && little[i] == big[j])
			return ((char*)&big[a]);
		a++;
	}
	return (NULL);
}
