/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:10:08 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/29 20:48:22 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //remember to delete this
#include <limits.h> //remember to delete this

int	ft_printf(const char *text, ...)
{
    va_list arg_ptr;
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
				counter += ft_putstr(va_arg(arg_ptr, char*));
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

int	main(void) //remember to delete main
{
//	int				decimal = INT_MAX;
//	char			small_let = 'a';
//	char			cap_let = 'A';
//	char			*text = "Text";
//	char			*no_text = "";
	unsigned int	uns_int = -1;
//	size_t			sizet_int = -1;
	unsigned int	uns_int_zero = 0;
//	int				int_zero = 0;
	int				ret_value_mine;
	int				ret_value_orig;

	ret_value_mine = ft_printf("mine %u%u\n", uns_int, uns_int_zero);
	ret_value_orig = printf("orig %u%u\n", uns_int, uns_int_zero);
	printf("my return value = %d, orig ret value = %d\n",ret_value_mine, ret_value_orig);
/*	ret_value_mine = ft_printf("Ptr address is %p\n",&decimal);
	ret_value_orig = printf("Ptr address is %p\n", &decimal);
	printf("my return value = %d, orig ret value = %d\n",ret_value_mine, ret_value_orig);*/

/*	ret_value_mine = ft_printf("No_text = %s\n", no_text);
	ret_value_orig = printf("No_text = %s\n", no_text);
	printf("my return value = %d, orig ret value = %d\n",ret_value_mine, ret_value_orig);
	
	ret_value_mine = ft_printf("Text = %s\n", text);
	ret_value_orig = printf("Text = %s\n", text);
	printf("my return value = %d, orig ret value = %d\n",ret_value_mine, ret_value_orig);

	ret_value_mine = ft_printf("null_pointer to string %s\n", NULL);
	ret_value_orig = printf("null_pointer to string %s\n", NULL);
	printf("my return value = %d, orig ret value = %d\n",ret_value_mine, ret_value_orig);*/
}
