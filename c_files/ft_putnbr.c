/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:30:59 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/17 16:20:16 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	static	ft_put_int_min(void)
{
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_putnbr(int nb)
{
	int		count;
	int		check;
	char	digit;

	if (nb == -2147483648)
		return (ft_put_int_min());
	count = 0;
	if (nb < 0)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		count = 1;
		nb = -nb;
	}
	if (nb > 9)
	{
		check = ft_putnbr(nb / 10);
		if (check < 0)
			return (-1);
		count += check;
	}
	digit = nb % 10 + '0';
	if (write(1, &digit, 1) != 1)
		return (-1);
	return (count + 1);
}
