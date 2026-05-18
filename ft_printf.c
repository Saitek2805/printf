/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:39:51 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/18 13:21:46 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void ft_handler(va_list arg, char character)
{
	if (character == 'c')
		ft_print_char((char)va_arg(arg, int));
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		counter;

	va_start(arg, str);
	counter = -1;
	while (str[++counter])
	{
		if(str[counter] == '%')
		{
			ft_handler(arg, str[counter + 1]);
			counter += 1;
		}
		else
			ft_print_char(str[counter]);
	}
		
	va_end(arg);	
	return (0);
}