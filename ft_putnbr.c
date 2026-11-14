/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:30:59 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/14 02:50:02 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		count = 11;
	}
	else if (nb < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-nb);
	}
	else if (nb > 9)
		count += ft_putnbr(nb / 10);
	count += ft_putchar(nb + '0');
	return (count);
}
