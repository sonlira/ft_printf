/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:43:12 by abaldelo          #+#    #+#             */
/*   Updated: 2024/10/28 16:40:44 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	replace_char(int c)
{
	if (c == 'x')
		return ('a');
	if (c == 'X')
		return ('A');
	return (c);
}

int	ft_puthexnbr(unsigned long long n, char c)
{
	int	len;

	len = 0;
	c = replace_char(c);
	if (n >= 16)
	{
		len += ft_puthexnbr((n / 16), c);
		len += ft_puthexnbr((n % 16), c);
	}
	else
	{
		if (n >= 10)
			len += ft_putchar(n - 10 + c);
		else
			len += ft_putchar(n + '0');
	}
	return (len);
}
