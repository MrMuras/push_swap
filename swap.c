/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:27:13 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/16 23:01:55 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	void	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = temp;
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	void	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = (*b)->content;
	(*b)->content = (*b)->next->content;
	(*b)->next->content = temp;
	ft_printf("sb\n");
}

void	ss(t_list *a)
{
	sa()
}
