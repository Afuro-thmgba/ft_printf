/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:07:44 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/28 11:49:35 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, int len)
{
	if (n < 0)
	{
		len = ft_putchar('-', len);
		n = n * -1;
	}
	if (n >= 10)
	{
		len = ft_putnbr(n / 10, len);
		len = ft_putnbr(n % 10, len);
	}
	else
		len = ft_putchar(n + '0', len);
	return (len);
}
