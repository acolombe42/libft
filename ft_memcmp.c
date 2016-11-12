/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:29:04 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/12 19:23:45 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	s11 = (const unsigned char*)s1;
	s22 = (const unsigned char*)s2;
	i = 0;
	while (i != n)
	{
		if (s11[i] == s22[i])
			i++;
		else
			return (s11[i] - s22[i]);
	}
	return (0);
}
