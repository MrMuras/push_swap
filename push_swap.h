/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:59:01 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/23 05:28:56 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "printf/ft_printf.h"
# include "printf/libft/libft.h"

typedef struct s_list
{
	int				content;
	char			binary[33];
	struct s_list	*next;
}					t_list;

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
void	sa(t_list **a, int i);
void	sb(t_list **b, int i);
void	ss(t_list **a, t_list **b);

//rotate
void	ra(t_list **a, int i);
void	rb(t_list **b, int i);
void	rr(t_list **a, t_list **b);

//reverse rotate
void	rra(t_list **a, int i);
void	rrb(t_list **b, int i);
void	rrr(t_list **a, t_list **b);

//push
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

//sorting_utilc
int		is_sorted(t_list *a);
int		list_len(t_list *list);

//list
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
char	*binconvers(unsigned int content, char *args, int negativ_or_not);
t_list	*int_to_index(t_list *list, t_list *list2);
int		indexation(t_list *list, t_list *list2);

//sorting
void	two(t_list **a);
void	three(t_list **a);
void	radix_sort(t_list **a, t_list **b);
void	push_swap(t_list **a, t_list **b);

#endif