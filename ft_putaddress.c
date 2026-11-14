/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 03:03:10 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/14 03:04:46 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putaddress(void *arg)
{
	int				count;
	char			*base;
	unsigned long	arg2;

	arg2 = (unsigned long)arg;
	base = "0123456789abcdef";
	count = 0;
	count += ft_putstr("0x");
	count += ft_base16(arg2, base);
	return (count);
}
