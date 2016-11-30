/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:12:18 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/30 15:08:49 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (s1[i] == s2[i] && s1[i] && i < n)
			i++;
		if (i == n || s1[i] == '\0')
			return (1);
	}
	return (0);
}
