/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:44:11 by allferna          #+#    #+#             */
/*   Updated: 2026/06/03 17:10:54 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(char spec, va_list args)
{
    if (spec == 'c')
        return (ft_put_c((char)va_arg(args, int)));
    if (spec == 's')
        return (ft_put_s(va_arg(args, char *)));
    if (spec == 'p')
    {
        char *p = va_arg(args, char *);
        return (ft_)

    }
    if (spec == 'i' || spec == 'd')
        return (ft_put_d_i(va_arg(args, int)));
    if (spec == 'u')
    {
        return (ft_print_int(va_arg(args, int)));
    }
    if (spec ==  'x' || spec == 'X')
    {

    }
    else if (spec == '%')
    {
        write (1, &spec, 1);
        return 1;
    }
    return 0;
}