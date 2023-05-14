/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/14 19:28:41 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_err(char *str)
{
	ft_printf(str);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	int		i;
	int count = 0;

	i = 1;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		i--;
		argv = ft_split(argv[1], ' ');
		argc = number_of_strings(argv);
	}
	i = 0;
	while (argv[i++])
		count++;
	if (count == 1)
		msg_err("Insert at least 2 vals");
	if (!check_errors(argc, argv))
	{
		msg_err("Invalid integer/s");
		free_double_array(argv, argc);
	}
	i = 0;
	while (i < argc)
		ft_lstadd_back(&a, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i++])));
		// TODO: Check if stack A is sorted and proceed with the sorting algorithm
	free_list(a);
	return (0);
}
