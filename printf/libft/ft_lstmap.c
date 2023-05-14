/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:15:04 by amurawsk          #+#    #+#             */
/*   Updated: 2023/02/05 20:08:36 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*header;
	t_list	*current;
	t_list	*new_node;

	header = NULL;
	if (lst && f)
	{
		current = lst;
		header = ft_lstnew(f(current->content));
		if (header == 0)
			return (0);
		current = current->next;
		while (current)
		{
			new_node = ft_lstnew(f(current->content));
			if (!new_node)
			{
				ft_lstclear(&header, del);
				header = NULL;
			}
			ft_lstadd_back(&header, new_node);
			current = current->next;
		}
	}
	return (header);
}
