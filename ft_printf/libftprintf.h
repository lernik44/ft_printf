/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:20:28 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/04/01 11:20:30 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n, int ctr);
int		ft_putnbr_base(int n, char *base, int ctr);
int		ft_putnbr_bx(int n, char base);
int		ft_putunsnbr(unsigned int n, int ctr);
int		ft_putunsnbr_base(size_t n, char *base, int ctr);
int		ft_put_ptraddress(size_t n);
int		ft_printf(const char *s, ...);
size_t	ft_strlen(char *s);
#endif
