/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:32:54 by allanbreu         #+#    #+#             */
/*   Updated: 2026/06/03 17:10:52 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_d_i(int n)
{
    int count;
    char c;

    count = 0;
    if ( n == -2147483648)
    {
        return (write(1, "-2147483648", 11));

    }
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
        count ++;
    }
    if (n > 9)
    {
        ft_put_d_i(n/10);
        count ++;
    }
    c = (n % 10) + '0';
    count += write (1, &c, 1);
    return (count);
}