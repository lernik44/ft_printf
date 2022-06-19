/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:18:49 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:18:57 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(int n, char *base, int counter)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	i = n;
	if (n < 0)
	{
		counter += ft_putchar('-');
		i = -n;
	}
	if (n == 0)
		counter += ft_putchar(base[0]);
	else if (i < base_len)
	{
		c = i % base_len;
		counter += ft_putchar(base[c]);
	}
	else
	{
		counter = ft_putnbr_base(i / base_len, base, counter);
		counter = ft_putnbr_base(i % base_len, base, counter);
	}
	return (counter);
}
