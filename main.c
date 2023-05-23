/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 04:08:13 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeab(t_list **a, t_list **b)
{
	free_list(*a);
	free_list(*b);
}

t_list	*big_craft(int argc, char *argv[])
{
	t_list	*temp;
	t_list	*a;

	temp = create_list(argc, argv);
	a = int_to_index(temp, temp);
	return (a);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	char	**args;

	if (argc < 2)
		msg_err("At least two arguments\n");
	if (argc == 2)
	{
		argv = parse_arguments(&argc, argv, &args);
		a = create_list(argc, argv);
		free_double_array(argc, args);
	}
	else
	{
		argv = parse_arguments(&argc, argv, &args) + 1;
		argc = argc - 1;
	}
	a = big_craft(argc, argv);
	push_swap(&a, &b);
	freeab(&a, &b);
	return (0);
}
