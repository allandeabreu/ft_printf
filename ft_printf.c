/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:09:32 by allferna          #+#    #+#             */
/*   Updated: 2026/06/03 17:10:56 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int total_printed;
	int i;

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
	while (i < quantidade)
	{
		total += va_arg(args, format);
		i++;
		if (const char * ==)
	}
	va_end(args);

	return (total_printed);
}