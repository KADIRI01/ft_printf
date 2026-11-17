/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 23:42:04 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/17 16:15:35 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		count;
	int		check;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			check = ft_check(str[++i], args);
		else
			check = ft_putchar(str[i]);
		if (check < 0)
		{
			va_end(args);
			return (-1);
		}
		count += check;
		i++;
	}
	va_end(args);
	return (count);
}
