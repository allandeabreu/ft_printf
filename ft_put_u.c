/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:13:19 by allanbreu         #+#    #+#             */
/*   Updated: 2026/06/03 19:43:29 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_put_u(unsigned int u)
{
    int count;
    char c;

    count = 0;
    if (u > 9)
        count += ft_put_u(u / 10);
    c = (u % 10) + '0';
    count += write(1, &c, 1);
    return (count);
}
