/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:59:01 by amurawsk          #+#    #+#             */
/*   Updated: 2023/05/14 18:45:02 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "printf/ft_printf.h"
# include "printf/libft/libft.h"

//parsing
int	check_errors(int argc, char *argv[]);
int	ft_str_is_numeric(char *str);
int	number_of_strings(char **ss);

//utils
void	free_double_array(char **str, int j);
void	free_list(t_list *list);

#endif