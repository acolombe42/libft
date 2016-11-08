/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:23:29 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/07 22:32:43 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len);

int	main()
{
	char sa[100] = "je suis";
	char da[100] = "non c moi le roi";

	printf("%s\n", sa);
	printf("%s\n", da);
	ft_strncpy(da, sa, 3);
	printf("%s\n", da);
	return (0);
}
