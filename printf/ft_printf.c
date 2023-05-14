/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:38:43 by amurawsk          #+#    #+#             */
/*   Updated: 2023/03/20 16:47:17 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	put_cs(int c, char *str)
{
	int	printf_len;

	printf_len = 0;
	if (c == 0)
		printf_len += write(1, &str, 1);
	else
	{
		if (!str)
			return (put_cs(1, "(null)"));
		printf_len += write (1, str, ft_strlen(str));
	}
	return (printf_len);
}

int	ft_base(unsigned long long number, int printf_len, char *set, int base)
{
	if (number)
		printf_len = ft_base(number / base, printf_len +1, set, base);
	else
	{
		if (printf_len == 0)
		{
			ft_putchar_fd('0', 1);
			return (1);
		}
		return (printf_len);
	}
	ft_putchar_fd(set[(number % base)], 1);
	return (printf_len);
}

int	ft_printf_int(int n, int printf_len)
{
	if (n == -2147483648)
		return (put_cs(1, "-2147483648"));
	if (n < 0)
	{
		n *= -1;
		printf_len += write(1, "-", 1);
	}
	if (n)
		printf_len = ft_printf_int(n / 10, ++printf_len);
	else
	{
		if (printf_len == 0)
		{
			ft_putchar_fd('0', 1);
			return (1);
		}
		return (printf_len);
	}
	ft_putchar_fd(n % 10 + '0', 1);
	return (printf_len);
}

int	ft_format(va_list *args, const char format)
{
	if (format == 'c')
	{
		put_cs(0, va_arg(*args, char *));
		return (1);
	}
	else if (format == 's')
		return (put_cs(1, va_arg(*args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_printf_int(va_arg(*args, int), 0));
	else if (format == 'p')
		return (put_cs (1, "0x") + ft_base(va_arg(*args, unsigned long long), \
			0, "0123456789abcdef", 16));
	else if (format == 'u')
		return (ft_base(va_arg(*args, unsigned int), 0, "0123456789", 10));
	else if (format == 'x')
		return (ft_base(va_arg(*args, unsigned int), 0, \
			"0123456789abcdef", 16));
	else if (format == 'X')
		return (ft_base(va_arg(*args, unsigned int), 0, \
			"0123456789ABCDEF", 16));
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printf_len;

	va_start(args, str);
	printf_len = 0;
	while (*str)
	{
		if (*str == '%')
			printf_len += ft_format(&args, *(++str));
		else
			printf_len += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (printf_len);
}
