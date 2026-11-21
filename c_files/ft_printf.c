/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 23:42:04 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/18 18:35:48 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parse(const char *str, va_list args)
{
	size_t	i;
	int		count;
	int		check;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && !str[i + 1])
			return (-1);
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			check = ft_check(str[i], args);
		}
		else
			check = ft_putchar(str[i]);
		if (check < 0)
			return (-1);
		count += check;
		i++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (-1);
	va_start(args, str);
	count = ft_parse(str, args);
	va_end(args);
	return (count);
}
