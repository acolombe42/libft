/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:18:48 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/12 18:00:36 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*src2;
	unsigned char		*dst2;

	src2 = (unsigned char*)src;
	dst2 = (unsigned char*)dst;
	i = 0;
	while (i != n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == (unsigned char)c)
		{
			i++;
			return (&dst2[i]);
		}
		i++;
	}
	return (NULL);
}
