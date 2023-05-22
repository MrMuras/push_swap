/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:38:10 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 01:18:05 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a, int i)
{
	t_list	*second_last;
	t_list	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = (*a);
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	if (i == 1)
		ft_printf("rra\n");
}

void	rrb(t_list **b, int i)
{
	t_list	*second_last;
	t_list	*last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	last = (*b);
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *b;
	*b = last;
	if (i == 1)
		ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}
