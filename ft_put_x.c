/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:44:17 by allanbreu         #+#    #+#             */
/*   Updated: 2026/06/22 21:24:36 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned int x, int spec)
{
	unsigned int	count;
	char			*base;

	count = 0;
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (x > 15)
		count += ft_put_x(x / 16, spec);
	count += write(1, &base[x % 16], 1);
	return (count);
}
