/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <lmirzakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:23:04 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/28 14:23:36 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	sum(int cnt, ...)
{
	double	res = 0;
	double	*ptr = &cnt + 1;
	for (; cnt > 0; cnt--)
		res += *(ptr++);
	return (res);
}

int	main(void)
{
	printf("%f\n", sum(3, 5.1, 6.2, 1.0));
}
