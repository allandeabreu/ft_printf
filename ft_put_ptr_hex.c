/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:45:44 by allferna          #+#    #+#             */
/*   Updated: 2026/06/12 19:23:42 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr_hex(unsigned long nbr)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 15)
	{
		count += ft_put_ptr_hex(nbr / 16);
	}
	count += write(1, &base[nbr % 16], 1);
	return (count);
}
