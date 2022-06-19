/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptraddress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:17:01 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:17:06 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_ptraddress(size_t i)
{
	int	counter;

	counter = 0;
	counter += ft_putstr("0x");
	counter = ft_putunsnbr_base(i, "0123456789abcdef", counter);
	return (counter);
}
