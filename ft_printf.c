/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmgba <thmgba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:54:20 by thmgba            #+#    #+#             */
/*   Updated: 2024/11/29 09:06:53 by thmgba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len = ft_print_arg(str[i], args, len);
			i++;
		}
		else
		{
			write (1, &str[i], 1);
			i++;
			len++;
		}
	}
	return (len);
}

/* int main()
{
	int a = 3;
	int *p = &a;
	int len = ft_printf(" NULL %s NULL ", NULL);
	printf("\nlen = %d\n", len);

	len = printf(" NULL %a NULL ", NULL);
	printf("\nlen = %d",len);
} */