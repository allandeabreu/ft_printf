/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 20:39:04 by allferna          #+#    #+#             */
/*   Updated: 2026/05/25 23:33:10 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h> // Para poder usar as macros de funções variádicas (va_start, va_arg, etc.)
#include <unistd.h> // Se você for usar a função write diretamente aqui

int ft_printf(const char *format, ...);

#endif

