/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 03:26:47 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 03:55:58 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indexation(t_list *list, t_list *list2)
{
	int	count;

	count = 0;
	while (list2)
	{
		if (list->content > list2->content)
			count++;
		list2 = list2->next;
	}
	return (count);
}

t_list	*int_to_index(t_list *list, t_list *list2)
{
	t_list	*a;
	t_list	**current;

	a = NULL;
	current = &a;
	while (list)
	{
		*current = ft_lstnew(indexation(list, list2) + 1);
		list = list->next;
		current = &((*current)->next);
	}
	return (a);
}

t_list	*create_list(int argc, char **args)
{
	t_list	*a;
	int		i;
	int		num;

	a = NULL;
	i = 0;
	while (i < argc)
	{
		num = ft_atoi(args[i++]);
		ft_lstadd_back(&a, ft_lstnew((num)));
	}
	return (a);
}
