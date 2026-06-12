/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:13:19 by allanbreu         #+#    #+#             */
/*   Updated: 2026/06/12 17:27:58 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int u)
{
	int		count;
	char	c;

	count = 0;
	if (u > 9)
		count += ft_put_u(u / 10);
	c = (u % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
