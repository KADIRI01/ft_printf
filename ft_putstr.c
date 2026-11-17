/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:29:44 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/16 18:47:53 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	check;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[count])
	{
		check = write (1, &str[count], 1);
		if (check != 1)
			return (-1);
		count++;
	}
	return (count);
}
