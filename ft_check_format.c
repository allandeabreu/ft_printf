/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:44:11 by allferna          #+#    #+#             */
/*   Updated: 2026/06/16 19:30:49 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_put_c((char)va_arg(args, int)));
	if (spec == 's')
		return (ft_put_s(va_arg(args, char *)));
	if (spec == 'p')
		return (ft_put_p(va_arg(args, void *)));
	if (spec == 'i' || spec == 'd')
		return (ft_put_d_i(va_arg(args, int)));
	if (spec == 'u')
		return (ft_put_u(va_arg(args, unsigned int)));
	if (spec == 'x' || spec == 'X')
		return (ft_put_x(va_arg(args, unsigned int), spec));
	if (spec == '%')
		return (write(1, &spec, 1));
	return (0);
}
