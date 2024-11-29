/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntohexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:59:01 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/28 14:05:06 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ntohexa( unsigned long n, int len, const char c)
{
	char	*hex_digits;
	char	result[20];
	int		index;

	hex_digits = (char *)malloc (16 * sizeof(char));
	if (!hex_digits)
		return (0);
	if (c == 'X')
		ft_hex_digitsup(hex_digits);
	else
		ft_hex_digitslow(hex_digits);
	index = 0;
	if (n == 0)
		len = ft_putchar('0', len);
	while (n > 0)
	{
		result[index++] = hex_digits[n % 16];
		n /= 16;
	}
	while (--index >= 0)
		len = ft_putchar(result[index], len);
	free(hex_digits);
	return (len);
}
