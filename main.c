/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:23:29 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/08 22:17:34 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main()
{
	char src[100] = "je suis l";
	char dst[100] = "non c moi le roi";

	printf("ft_strcpy : %s \tstrcpy: %s", ft_strcpy(dst, src) , strcpy(dst, src));
	printf("\n\nft_strncpy : %s \t strncpy: %s", ft_strncpy(dst, src, 5) , strncpy(dst, src, 5));
	return (0);
}
