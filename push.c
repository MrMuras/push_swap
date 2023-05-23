/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:39:11 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 05:06:59 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*firstb;

	if (*b == NULL)
		return ;
	firstb = *b;
	*b = (*b)->next;
	firstb->next = *a;
	*a = firstb;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	t_list	*firsta;

	if (*a == NULL)
		return ;
	firsta = *a;
	*a = (*a)->next;
	firsta->next = *b;
	*b = firsta;
	ft_printf("pb\n");
}
