/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:39:17 by amurawsk          #+#    #+#             */
/*   Updated: 2023/03/20 16:48:11 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	put_cs(int c, char *str);
int	ft_base(unsigned long long u, int printf_len, char *set, int base);
int	ft_printf_int(int n, int printf_len);
int	ft_format(va_list *args, const char format);
int	ft_printf(const char *str, ...);

#endif