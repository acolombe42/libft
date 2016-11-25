/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:14:56 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/25 19:20:10 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	s2 = (char*)malloc(sizeof(*s2) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i != len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
