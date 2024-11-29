/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:59:33 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/29 08:23:55 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strcpy(char *str, int len)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6), len + 6);
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
		len++;
	}
	return (len);
}
