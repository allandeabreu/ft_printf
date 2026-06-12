/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 20:39:04 by allferna          #+#    #+#             */
/*   Updated: 2026/06/12 15:43:56 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h> // Para poder usar as macros de funções variádicas (va_start, va_arg, etc.)
#include <unistd.h> // Se você for usar a função write diretamente aqui

int ft_printf(const char *format, ...);
int	ft_put_c(char c);
int	ft_put_s(char *s);
int	ft_put_p(void *ptr);
int	ft_put_d_i(int nbr);
int	ft_put_u(unsigned int nbr);
int	ft_put_x(unsigned int nbr, int spec);

#endif

