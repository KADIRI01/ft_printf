/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:51:46 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/14 03:02:03 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_base16(unsigned long nb, char *base)
{
	int	count;

	count = 0;
	if (nb > 15)
		count += ft_base16(nb / 16, base);
	count += ft_putchar(base[nb % 16]);
	return (count);
}

int	ft_puthexa(unsigned int nb, int type)
{
	char	*base;

	if (type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (ft_base16(nb, base));
}
