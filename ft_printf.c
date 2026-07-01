/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:09:32 by allferna          #+#    #+#             */
/*   Updated: 2026/06/16 19:30:54 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_printed;
	int		i;

	va_start(args, format);
	total_printed = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			total_printed += ft_check_format(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			total_printed++;
		}
		i++;
	}
	va_end(args);
	return (total_printed);
}
