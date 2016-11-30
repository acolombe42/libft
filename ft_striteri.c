/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:29:09 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/30 00:02:22 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		j = ft_strlen(s);
		while (i != j)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
