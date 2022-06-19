/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:19:25 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:19:29 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunsnbr_base(size_t i, char *base, int counter)
{
	unsigned int	c;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (i == 0)
		counter += ft_putchar(base[0]);
	else if (i < base_len)
	{
		c = i % base_len;
		counter += ft_putchar(base[c]);
	}
	else
	{
		counter = ft_putunsnbr_base(i / base_len, base, counter);
		counter = ft_putunsnbr_base(i % base_len, base, counter);
	}
	return (counter);
}
