/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:45:17 by fathjami          #+#    #+#             */
/*   Updated: 2021/11/26 20:36:49 by fathjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_pointer(unsigned long int n);
int ft_putuns(unsigned int n);
int ft_putnbr(int n);
int ft_putnbr_base(unsigned int n, char c);
int ft_strlen(char *str);
int ft_printf(const char *format, ...);

#endif
