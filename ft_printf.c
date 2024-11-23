/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:27:05 by akahir            #+#    #+#             */
/*   Updated: 2024/11/23 17:41:10 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    int i;
    int count;

    i = 0;
    count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            ft_handlers(format, i, list, &count);
            i++;
        }
        else
        {
            count += write(1, &format[i], 1);
        }
        i++;
    }
    va_end(list);
    return (count);
}

int main()
{
    ft_printf("%p\n\n", "Hello"); 
    printf("%p", "Hello"); 
}