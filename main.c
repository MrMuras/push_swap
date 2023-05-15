/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/15 20:53:09 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list *a;
	char **args;

	args = NULL;
	if (argc < 2) 
		msg_err("At least two arguments\n");
	args = parse_arguments(argc, argv);
	a = create_list(argc, args);
	// TODO: Check if stack A is sorted and proceed with the sorting algorithm
	free_list(a);
	return (0);
}
