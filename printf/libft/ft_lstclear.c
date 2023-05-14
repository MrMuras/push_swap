/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:20:50 by amurawsk          #+#    #+#             */
/*   Updated: 2023/02/05 18:50:05 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst && del)
	{
		current = *lst;
		while (current != NULL)
		{
			*lst = current->next;
			ft_lstdelone(current, del);
			current = *lst;
		}
		lst = NULL;
	}
}
