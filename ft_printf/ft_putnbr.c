/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:17:45 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:17:53 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, int counter)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		counter += ft_putchar('-');
		i = -n;
	}
	if (n == 0)
		counter += ft_putchar('0');
	else if (i < 10)
		counter += ft_putchar(i % 10 + '0');
	else
	{
		counter = ft_putnbr(i / 10, counter);
		counter = ft_putnbr(i % 10, counter);
	}
	return (counter);
}
