/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:11:46 by akahir            #+#    #+#             */
/*   Updated: 2024/11/23 17:43:05 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void  ft_handlers(const char *format, int i, va_list list, int *count)
{
    if (format[i + 1] == 'c')
    {
        char c = (char)va_arg(list, int);
        count += write(1, &c, 1);
    }
    else if (format[i + 1] == 's')
    {
        char *str = va_arg(list, char *);
        count += write(1, str, ft_strlen(str));
    }
    else if (format[i + 1] == 'p')
    {
        void *ptr = va_arg(list, void *);
        if (!ptr)
        {
            ft_putstr("(nil)", *count);
            return ;
        }
        ft_putstr("0x", *count);
        ft_putnbr_base((unsigned long)ptr, "0123456789abcdef", count);
    }
    else if (format[i + 1] == 'd')
    {
        
    }
    else if (format[i + 1] == 'i')
    {
        
    }
    else if (format[i + 1 == 'u'])
    {
        
    }
    else if (format[i + 1] == 'x')
    {
        
    }
    else if (format[i + 1] == 'X')
    {
        
    }
    else if (format[i + 1] == '%')
    {
        
    }
}
