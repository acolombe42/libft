/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:18:48 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/12 17:17:43 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*a;
	unsigned char		*src2;
	unsigned char		*dst2;
	unsigned char		c2;

	src2 = (unsigned char*)src;
	dst2 = (unsigned char*)dst;
	c2 = (unsigned char)c;
	i = 0;
	a = NULL;
	while (i != n)
	{
		if (c2 == src2[i])
			return (a = &dst2[i++]);
		dst2[i] = src2[i];
		i++;
	}
	return (a);
}
