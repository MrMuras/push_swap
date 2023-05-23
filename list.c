/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 02:27:26 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 03:55:31 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list) + 1);
	a->content = content;
	binconvers(content, &(a->binary[0]), content < 0);
	a->binary[32] = '\0';
	a->next = NULL;
	return (a);
}

char	*binconvers(unsigned int content, char *args, int negativ_or_not)
{
	int	binary_index;

	binary_index = 32;
	while (--binary_index > 0)
	{
		args[binary_index] = (content % 2) + '0';
		content /= 2;
	}
	args[binary_index] = '0';
	if (negativ_or_not == 0)
		args[binary_index] = '1';
	return (args);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (current);
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
