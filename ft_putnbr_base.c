/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:00:29 by akahir            #+#    #+#             */
/*   Updated: 2024/11/23 17:18:44 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putnbr_base(unsigned long ptr, const char *base, int *count)
{
    char c;
    
    if (ptr >= 16)
    {
        ft_putnbr_base(ptr / 16, base, count);
    }
    c = base[ptr % 16];
    *count += write(1, &c, 1);
}