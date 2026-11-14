/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:47:42 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/14 02:48:45 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putunsigned(unsigned int nb)
{
    int count;

    count = 0;
    if (nb > 9)
        count += ft_putunsigned(nb / 10);
    count += ft_putchar((nb % 10) + '0');
    return (count);
}