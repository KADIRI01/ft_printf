/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 03:03:10 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/17 17:05:51 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *arg)
{
	int				count;
	unsigned long	arg2;
	int				check;

	if (!arg)
		return (ft_putstr("(nil)"));
	arg2 = (unsigned long)arg;
	count = 0;
	check = ft_putstr("0x");
	if (check != 2)
		return (-1);
	count += check;
	check = ft_puthexa(arg2, 'x');
	if (check < 0)
		return (-1);
	count += check;
	return (count);
}
