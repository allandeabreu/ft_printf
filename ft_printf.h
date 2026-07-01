/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 20:39:04 by allferna          #+#    #+#             */
/*   Updated: 2026/06/16 19:30:51 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_check_format(char spec, va_list args);
int	ft_put_c(char c);
int	ft_put_s(char *s);
int	ft_put_p(void *ptr);
int	ft_put_d_i(int nbr);
int	ft_put_u(unsigned int nbr);
int	ft_put_x(unsigned int nbr, int spec);

#endif
