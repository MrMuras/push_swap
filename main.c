/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 01:19:20 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeab(t_list **a, t_list **b)
{
	free_list(*a);
	free_list(*b);
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
		argv = parse_arguments(&argc, argv, &args);
		a = create_list(argc - 1, argv + 1);
	}
	if (!is_sorted(a))
	{
		b = NULL;
		print_list(a,b);
	}
	freeab(&a, &b);
	return (0);
}
