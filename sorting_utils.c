/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:15:46 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/22 17:37:48 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (*(int *)a->content < *(int *)a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

int find_max(t_list *stack)
{
	int max_value = -2147483648;
	t_list *current = stack;

	while (current)
	{
		if (*(int *)current->content > max_value)
		{
			max_value = *(int *)current->content;
		}
		current = current->next;
	}

	return max_value;
}

// Count the number of digits in the maximum value
int count_digits(int max_value)
{
	int digits = 0;

	while (max_value)
	{
		digits++;
		max_value /= 10;
	}

	return digits;
}