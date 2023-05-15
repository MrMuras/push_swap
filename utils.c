/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:39:01 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/15 15:00:15 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_double_array(int j, char **str)
{
	if (str == NULL)
		return ;
	while (j-- > 0)
		free_pointer(str[j]);
	free(str);
	str = NULL;
}

void	free_pointer(char * str)
{
	if (str != NULL)
	{
		free(str);
		str = NULL;
	}
}

void	free_list(t_list *list)
{
	t_list	*temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp->content);
		free(temp);
	}
}

void	msg_err(char *str)
{
	ft_printf(str);
	exit(1);
}