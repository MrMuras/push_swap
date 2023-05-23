/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 19:35:16 by amurawsk         ###   ########.fr       */
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
	t_list	*temp;
	char	**args;

	if (argc < 2)
		msg_err("At least two arguments\n");
	if (argc == 2)
		argv = parse_arguments(&argc, argv, &args);
	else
	{
		argv = parse_arguments(&argc, argv, &args);
		argc = argc - 1;
	}
	b = NULL;
	temp = create_list(argc, argv);
	a = int_to_index(temp, temp);
	free_list(temp);
	if (argc < 2)
		free_double_array(argc, args);
	push_swap(&a, &b);
	freeab(&a, &b);
	return (0);
}
