/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:10:49 by acolombe          #+#    #+#             */
/*   Updated: 2016/11/08 22:12:55 by acolombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIBFT_H
# define __FT_LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strlen(const char *s);
char	*ft_strncpy(char *dst, const char *src, size_t len);

#endif
