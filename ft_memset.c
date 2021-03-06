/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:31:45 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/12 16:13:17 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	newc;
	unsigned char	*newb;

	newc = (unsigned char)c;
	newb = (unsigned char*)b;
	i = 0;
	while (i != len)
	{
		newb[i] = newc;
		i++;
	}
	return (b);
}
