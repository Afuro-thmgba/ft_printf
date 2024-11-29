/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 06:55:06 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/29 08:18:12 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printmemory(unsigned long long n, int len)
{
	char	*hex_digits;
	char	result[20];
	int		index;

	hex_digits = (char *)malloc (16 * sizeof(char));
	if (!hex_digits)
		return (0);
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
