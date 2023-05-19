/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:59:01 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/19 20:59:55 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "printf/ft_printf.h"
# include "printf/libft/libft.h"

//parsing
int		check_errors(int argc, char *argv[], int i);
int		ft_str_is_numeric(char *str);
int		number_of_strings(char **ss);
char	**parse_arguments(int *argc, char *argv[], char ***args);
t_list	*create_list(int argc, char **args);

//utils
void	free_double_array(int j, char **str);
void	free_list(t_list *list);
void	msg_err(char *str);
void	free_pointer(char *str);
void	print_list(t_list *a, t_list *b);

//swap
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

//rotate
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

//reverse rotate
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

//push
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

#endif