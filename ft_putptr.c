/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldelo <abaldelo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:54:13 by abaldelo          #+#    #+#             */
/*   Updated: 2024/10/27 23:00:19 by abaldelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int					len;
	unsigned long long	pnum;

	len = 0;
	pnum = (unsigned long long)p;
	if (!pnum)
		len += ft_putstr("(nil)");
	else
	{
		len += ft_putstr("0x");
		len += ft_puthexnbr(pnum, 'x');
	}
	return (len);
}
