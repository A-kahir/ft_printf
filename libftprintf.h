/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:21:32 by akahir            #+#    #+#             */
/*   Updated: 2024/11/23 17:26:34 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF
#define LIBFT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
#       include <stdio.h>
//principle func : 
int		ft_printf(const char *format, ...);
void	ft_handlers(const char *format, int i, va_list list, int *count);
//helper func :
size_t	ft_strlen(char *str);
int	ft_putstr(char *s, int count);
void	ft_putnbr_base(unsigned long ptr, const char *base, int *count);
#endif