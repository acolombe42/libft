/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:49:26 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/12 19:10:31 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	while (s1[i])
		i++;
	s2 = (char*)(malloc(sizeof(char) * (i + 1)));
	if (s2 == NULL)
		return (NULL);
	ft_strcpy(s2, s1);
	return (&s2[0]);
}
