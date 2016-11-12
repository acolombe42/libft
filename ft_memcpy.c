/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:24:53 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/12 16:31:14 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;
	unsigned char		*dst2;

	src2 = (const unsigned char*)src;
	dst2 = (unsigned char*)dst;
	i = 0;
	while (i != n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst2);
}
