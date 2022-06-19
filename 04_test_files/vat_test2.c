/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vat_test2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <lmirzakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:24:55 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/28 14:30:16 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

double	sum(int cnt, ...)
{
	double	res = 0;
	va_list	ptr;
	va_start(ptr, cnt);
	for (; cnt > 0; cnt--)
		res += va_arg(ptr, double);
	va_end(ptr);
	return (res);
}

int	main(void)
{
	printf("%f\n", sum(3, 5.1, 6.2, 1.0));
}
