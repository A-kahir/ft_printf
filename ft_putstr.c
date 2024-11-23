/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <akahir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:00:43 by akahir            #+#    #+#             */
/*   Updated: 2024/11/23 17:26:45 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s, int count)
{
	int	size;

	if (s == NULL)
	{
		return (0);
	}
	size = 0;
	while (s[size] != '\0')
	{
		size++;
		count++;
	}
	write(1, s, size);
	return (count);
}