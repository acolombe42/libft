/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:09:14 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/30 23:03:02 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nb_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (j);
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	return (j);
}

static	int	ft_word_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_nb_word(s, c);
	tab = (char**)malloc(sizeof(char*) * ((ft_nb_word(s, c) + 1)));
	if (tab == NULL)
		return (NULL);
	tab[ft_nb_word(s, c)] = NULL;
	while (j--)
	{
		while (*s == c && *s)
			s++;
		tab[i] = ft_strsub(s, 0, ft_word_size(s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + ft_word_size(s, c);
		i++;
	}
	return (tab);
}
