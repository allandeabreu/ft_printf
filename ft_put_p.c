/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:26:11 by allanbreu         #+#    #+#             */
/*   Updated: 2026/06/12 15:56:38 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_p(void *ptr)
{
	unsigned long address;
	int count;

	if (!ptr)
		return (ft_put_s("(nil)"));
	address = (unsigned long)ptr;
	count = 0;
	count += ft_put_s("0x");
	count += ft_put_ptr_hex(address);
	return (count);
}