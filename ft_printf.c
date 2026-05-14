/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:39:51 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/14 11:06:58 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(char const *str, ...)
{
	char *strcpy;

	strcpy =(char *) str;
	ft_putstr_fd(strcpy, 1);
	
	return (0);
}