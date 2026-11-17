/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:08:09 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/17 16:41:01 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = ft_putchar(va_arg(args, int));
	if (type == 's')
		count = ft_putstr(va_arg(args, char *));
	if (type == 'd' || type == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (type == 'p')
		count = ft_putaddress(va_arg(args, void *));
	if (type == 'u')
		count = ft_putunsigned(va_arg(args, unsigned int));
	if (type == 'X' || type == 'x')
		count = ft_puthexa(va_arg(args, unsigned int), type);
	if (type == '%')
		count = ft_putchar('%');
	if (count < 0)
		return (-1);
	return (count);
}
