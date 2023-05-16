/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:00:08 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/16 16:08:56 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_arguments(int *argc, char *argv[], char ***args)
{
	int		number_of_arguments;

	*args = argv;
	if (*argc == 2) 
	{
		*args = ft_split(argv[1], ' ');
		number_of_arguments = number_of_strings(*args);
		if (!check_errors(number_of_arguments, *args, 0))
		{
			free_double_array(number_of_arguments, *args);
			msg_err("Invalid integer/s\n");
		}
	}
	else if (!check_errors(*argc, *args, 1))
		msg_err("Invalid integer/s\n");
	if (*argc == 2)
			*argc = number_of_arguments;
	return (*args);
}

int	check_errors(int argc, char *argv[], int i)
{
	int		j;
	long	num;

	ft_printf("argc: %d   ", argc);
	while (i < argc)
	{
		j = 0;
		if (!ft_str_is_numeric(argv[i]))
			return (0);
		num = ft_atoi(argv[i]);
		ft_printf("atoi value: %d\n", num);
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

t_list	*create_list(int argc, char **args)
{
	t_list	*a;
	int		i;
	int		*num;

	a = NULL;
	i = 0;
	while (i < argc)
	{
		num = malloc(sizeof(int));
		*num = ft_atoi(args[i++]);
		ft_lstadd_back(&a, ft_lstnew((void *)num));
	}
	return (a);
}

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
