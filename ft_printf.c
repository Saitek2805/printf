/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:39:51 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/19 15:21:43 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_handler(va_list arg, char character)
{
	if (character == 'c')
		ft_print_char(va_arg(arg, int));
	if (character == 's')
		return (ft_print_str(va_arg(arg, char *)));
	if (character == 'd')
		return (ft_print_nbr(va_arg(arg, int)) - 1);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		counter;
	int		entries;
	int		printed;

	va_start(arg, str);
	counter = -1;
	entries = 0;
	while (str[++counter])
	{
		if (str[counter] == '%')
		{
			printed += ft_handler(arg, str[counter + 1]);
			counter += 1;
			entries++;
		}
		else
			ft_print_char(str[counter]);
	}
	va_end(arg);
	return (counter - entries + printed);
}
