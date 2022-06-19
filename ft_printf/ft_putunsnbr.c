/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:19:14 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:19:16 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunsnbr(unsigned int n, int counter)
{
	char	c;

	if (n == 0)
		counter += ft_putchar('0');
	else if (n < 10)
	{
		c = n % 10 + '0';
		counter += ft_putchar(c);
	}
	else
	{
		counter = ft_putunsnbr(n / 10, counter);
		counter = ft_putunsnbr(n % 10, counter);
	}
	return (counter);
}
