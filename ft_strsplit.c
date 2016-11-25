/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:09:14 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/25 20:03:05 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (j);
		while(s[i] != c && s[i])
			i++;
		j++;
	}
	return (j);
}

static	int	ft_is_begin_word(char const *s, char c, int i)
{
	if (i == 0 && s[i] != c)
		return (1);
	if (s[i] != c && s[i - 1] == c)
		return (1);
	return (0);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	tab = (char**)malloc(sizeof(char*) * ((ft_count_word(s, c))));
	if (tab == NULL)
		return (NULL);
	if (ft_count_word(s, c) == 0)
		return (tab);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		j = i;
		if (ft_is_begin_word(s, c, i))
		{
			while (s[i] != c)
				i++;
			tab[k++] = ft_strsub(s, j, (i - j));
		}
		i++;
	}
	return (tab);
}
