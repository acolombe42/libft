/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:34:08 by acolombe          #+#    #+#             */
/*   Updated: 2016/12/06 15:36:22 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;
	size_t	i;

	i = 0;
	s = (void*)malloc(sizeof(*s) * (size + 1));
	if (s == NULL)
		return (NULL);
	while (((char*)s)[i])
	{
		((char*)s)[i] = 0;
		i++;
	}
	return (s);
}
