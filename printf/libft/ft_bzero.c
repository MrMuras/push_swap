/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:49:32 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/16 20:46:09 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*(char *)s = 0;
		n --;
		s++;
	}
}

// int main (void)
// {
// 	char str[] = "12345678";
// 	ft_bzero(str, 3);
// 	printf("%s\n", str);
// 	printf("%s\n", str+ 1);
// 	printf("%s\n", str+ 2);
// 	printf("%s\n", str+ 3);
// 	printf("%s\n", str+ 4);
// 	printf("%s\n", str+ 5);
// }