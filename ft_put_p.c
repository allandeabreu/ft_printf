/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:26:11 by allanbreu         #+#    #+#             */
/*   Updated: 2026/06/22 21:24:42 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x_long(unsigned long long x)
{
	unsigned int	count;
	char			*base;

	count = 0;
	base = "0123456789abcdef";
	if (x > 15)
		count += ft_put_x_long(x / 16);
	count += write(1, &base[x % 16], 1);
	return (count);
}

int	ft_put_p(void *ptr)
{
	unsigned long long	x;
	int					count;

	x = (unsigned long long)ptr;
	count = 0;
	if (!ptr)
		return (ft_put_s("(nil)"));
	count += ft_put_s("0x");
	count += ft_put_x_long(x);
	return (count);
}
