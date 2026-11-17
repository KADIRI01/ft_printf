/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:47:42 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/17 16:26:53 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb)
{
	int	count;
	int	check;

	count = 0;
	if (nb > 9)
	{
		check = ft_putunsigned(nb / 10);
		if (check < 0)
			return (-1);
		count += check;
	}
	check = ft_putchar(nb % 10 + '0');
	if (check < 0)
		return (-1);
	return (count + check);
}
