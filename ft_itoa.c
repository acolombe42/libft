/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 21:37:30 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/29 23:54:26 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nb_decimal(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = 0;
	i = ft_nb_decimal(n);
	if (n <= 0)
		i++;
	if ((str = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		j++;
		n = n * -1;
	}
	while (i-- > j)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}
