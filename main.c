/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/16 19:55:16 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
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
	print_list(a);
	// TODO: Check if stack A is sorted and proceed with the sorting algorithm
	free_list(a);
	return (0);
}
