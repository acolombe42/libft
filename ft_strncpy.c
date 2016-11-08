/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:13:39 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/08 22:13:43 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i != len)
	{
		dst[i] = src[i];
		i++;
	}
	while (dst[i])
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
