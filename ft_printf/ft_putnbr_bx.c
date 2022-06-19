/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:19:51 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:19:53 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_bx(int i, char base)
{
	int				counter;
	unsigned int	n;

	counter = 0;
	n = (unsigned int) i;
	if (base == 'x')
		counter = ft_putunsnbr_base(n, "0123456789abcdef", 0);
	else if (base == 'X')
		counter = ft_putunsnbr_base(n, "0123456789ABCDEF", 0);
	else
		return (-1);
	return (counter);
}
