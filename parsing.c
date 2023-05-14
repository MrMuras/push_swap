/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:00:08 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/13 21:30:06 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_is_numeric(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	check_errors(int argc, char *argv[])
{
	int		i;
	int		j;
	long	num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (!ft_str_is_numeric(argv[i]))
			return (0);
		num = ft_atoi(argv[i]);
		if (num < -2147483648 || num > 2147483647)
			return (0);
		while (++j < argc)
		{
			if (j == i)
				continue ;
			if (num == ft_atoi(argv[j]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	number_of_strings(char **ss)
{
	int	i;

	i = 0;
	while (ss[i])
		i++;
	return (i);
}