/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:51:46 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/17 16:41:14 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base16(unsigned long nb, char *base)
{
	int	count;
	int	check;

	count = 0;
	if (nb > 15)
	{
		check = ft_base16(nb / 16, base);
		if (check < 0)
			return (-1);
		count += check;
	}
	check = ft_putchar(base[nb % 16]);
	if (check < 0)
		return (-1);
	return (count + check);
}

int	ft_puthexa(unsigned long nb, char type)
{
	char	*base;

	if (type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (ft_base16(nb, base));
}
