/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:48:56 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/29 08:35:16 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));
int		ft_print_arg(const char c, va_list args, int len);
int		ft_strcpy(char *str, int len);
int		ft_putchar(int c, int len);
int		ft_putnbr(long n, int len);
int		ft_putunbr(unsigned long n, int len);
void	ft_hex_digitsup( char *hex_digits);
void	ft_hex_digitslow( char *hex_digits);
int		ft_ntohexa( unsigned long n, int len, const char c);
int		ft_printmemory(unsigned long long n, int len);

#endif