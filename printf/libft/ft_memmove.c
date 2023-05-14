/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:13:08 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/19 12:45:12 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (dst);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int main (void)
// {
// 	char sp[] = "Para";
// 	char dp[] = "Elephant";
// 	char sp1[] = "Para";
// 	char dp1[] = "Elephant";
// 	ft_memmove(dp, sp, 5);
// 	memmove(dp1, sp1, 5);
// 	printf("%s\n", dp);
// 	printf("%s\n", dp+1);
// 	printf("%s\n", dp+2);
// 	printf("%s\n", dp+3);
// 	printf("%s\n", dp+4);
// 	printf("%s\n", dp+5);
// 	printf("%s", dp1);
// }