/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:53:36 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/17 14:07:54 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*dp;
	const char	*sp;

	dp = dst;
	sp = src;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*dp = *sp;
		dp++;
		sp++;
		n--;
	}
	return (dst);
}

// int main (void)
// {
// 	char dp[] = "ELEPHANT";
// 	char sp[] = "Para";
// 	char dp1[] = "ELEPHANT";
// 	char sp1[] = "Para";
// 	ft_memcpy(dp, sp, 5);
// 	memcpy(dp1, sp1, 5);
// 	printf("%s\n", dp);
// 	printf("%s\n", dp+1);
// 	printf("%s\n", dp+2);
// 	printf("%s\n", dp+3);
// 	printf("%s\n", dp+4);
// 	printf("%s\n", dp+5);
// 	printf("%s", dp1);
// }