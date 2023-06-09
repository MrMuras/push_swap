/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:29:26 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 20:51:17 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two(t_list **a)
{
	if (is_sorted(*a))
		return ;
	sa(a, 1);
}

void	three(t_list **a)
{
	int	con1;
	int	con2;
	int	con3;

	con1 = (*a)->content;
	con2 = (*a)->next->content;
	con3 = (*a)->next->next->content;
	if (con1 > con2 && con1 < con3)
		sa(a, 1);
	else if (con1 > con2 && con2 > con3)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (con1 > con3 && con2 < con3)
		ra(a, 1);
	else if (con1 < con2 && con2 > con3 && con1 < con3)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (con1 < con2 && con2 > con3 && con1 > con3)
		rra(a, 1);
}

void	radix_sort(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	max_digits;
	int	size;

	max_digits = 0;
	size = list_len(*a);
	while (((size - 1) >> max_digits) != 0)
		max_digits++;
	i = 0;
	while (i < max_digits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->content >> i) & 1) == 1)
				ra(a, 1);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

void	push_swap(t_list **a, t_list **b)
{
	int	len;

	len = list_len(*a);
	if (len == 2)
		two(a);
	else if (len == 3)
		three(a);
	else if (len == 5)
		sort_five(a, b);
	else
		radix_sort(a, b);
}

void	sort_five(t_list **a, t_list **b)
{
	int	min1;
	int	min2;

	min1 = find_min(*a);
	pb(a, b);
	min2 = find_min(*a);
	pb(a, b);
	three(a);
	if ((*b)->content == min1)
	{
		pa(a, b);
		pa(a, b);
	}
	else
	{
		pa(a, b);
		ra(a, 1);
		pa(a, b);
		rra(a, 1);
	}
}
