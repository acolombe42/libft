/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:49:18 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/22 16:24:30 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	i = 0;
	while (i != len)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst2);
}
