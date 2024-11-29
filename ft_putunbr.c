/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:28:04 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/28 11:49:48 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned long n, int len)
{
	if (n >= 10)
	{
		len = ft_putunbr(n / 10, len);
		len = ft_putunbr(n % 10, len);
	}
	else
		len = ft_putchar(n + '0', len);
	return (len);
}
