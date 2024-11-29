/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:33:12 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/29 08:19:34 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(const char c, va_list args, int len)
{
	unsigned long long	temp;

	if (c == 'c')
		len = ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		len = ft_strcpy(va_arg(args, char *), len);
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		len = ft_putunbr(va_arg(args, unsigned int), len);
	else if (c == 'x')
		len = ft_ntohexa(va_arg(args, unsigned int), len, c);
	else if (c == 'X')
		len = ft_ntohexa(va_arg(args, unsigned int), len, c);
	else if (c == '%')
		len = ft_putchar('%', len);
	else if (c == 'p')
	{
		temp = va_arg(args, unsigned long long);
		if (temp == 0)
			return (write(1, "(nil)", 5), len + 5);
		write (1, "0x", 2);
		len = ft_printmemory(temp, len + 2);
	}
	return (len);
}
