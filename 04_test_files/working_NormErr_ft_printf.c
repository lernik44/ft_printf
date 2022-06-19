/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:10:08 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 21:16:26 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *text, ...)
{
	va_list	arg_ptr;
	int		counter;

	counter = 0;
	va_start(arg_ptr, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			if (*text == 'c')
				counter += ft_putchar(va_arg(arg_ptr, int));
			else if (*text == 's')
				counter += ft_putstr(va_arg(arg_ptr, char *));
			else if (*text == 'p')
				counter += ft_put_ptraddress(va_arg(arg_ptr, size_t));
			else if (*text == 'd' || *text == 'i')
				counter += ft_putnbr(va_arg(arg_ptr, int), 0);
			else if (*text == 'u')
				counter += ft_putunsnbr(va_arg(arg_ptr, unsigned int), 0);
			else if (*text == 'x')
				counter += ft_putnbr_bx(va_arg(arg_ptr, size_t), 'x');
			else if (*text == 'X')
				counter += ft_putnbr_bx(va_arg(arg_ptr, size_t), 'X');
			else if (*text == '%')
				counter += ft_putchar('%');
			else
				return (-1);
		}
		else
			counter += ft_putchar(*text);
		text++;
	}
	va_end(arg_ptr);
	return (counter);
}
