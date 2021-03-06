/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:27:16 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/30 00:29:40 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	l;
	size_t	j;
	char	*s1;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	while (s[l] == ' ' || s[l] == ',' || s[l] == '\n' || s[l] == '\t')
		l--;
	l++;
	if (s[i] == '\0')
		i = 0;
	s1 = ft_memalloc(((l - i) + 1));
	if (s1 == NULL)
		return (NULL);
	while (i != l)
		s1[j++] = s[i++];
	s1[j] = '\0';
	return (s1);
}
