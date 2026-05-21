/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:09:32 by allferna          #+#    #+#             */
/*   Updated: 2026/05/21 22:42:15 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	int total_printed;
    int i;

    va_start(args, format);
    
    total_printed = 0;
	i = 0;

    while (format != '\0')
    {
        if(format[i] == %)
        {
            i++;
            if( format [i] == c)
            {

            }
            if 

        }
        else if
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

    return(total_printed);
}