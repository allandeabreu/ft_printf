/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:44:11 by allferna          #+#    #+#             */
/*   Updated: 2026/05/25 23:33:01 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(char format, va_list args)
{
    if (format[i] == 'c')
    {
        char c = (char)va_arg(args, int);
        ft_putchar(c);
    }
    if (format[i] == 's')
    {
        char *s = va_arg(args, char *);
        if(!s)
            s = "(NULL)";
        ft_putstr_fd(char s*);
    }
    if (format[i] == 'p')
    {
        char *p = va_arg(args, char *);

    }
    if (format[i] == 'i' || format[i] == 'd')
    {
        
    }
}