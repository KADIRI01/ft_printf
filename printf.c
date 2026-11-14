/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 23:42:04 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/14 02:07:35 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *str, ... )
{
    va_list args;
    size_t  i;
    int     count;

    va_start(args, str);
    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1])
                count += ft_check(str[i + 1], args);
        else
            count += ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (count);
}

