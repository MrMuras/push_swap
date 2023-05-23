/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:15:46 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 04:12:13 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->content < a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

int	list_len(t_list *list)
{
	if (list)
		return (list_len(list->next) + 1);
	return (0);
}
