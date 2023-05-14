/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:00:22 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/17 15:57:52 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	c1;

	dst = (unsigned char *) s;
	c1 = (unsigned char) c;
	while (n--)
	{
		if (*dst == c1)
			return (dst);
		dst++;
	}
	return (NULL);
}
// int main(void)
// {
// 	printf("%s\n", memchr("abcdef", 'c', 5));
// 	printf("%s", ft_memchr("abcdef", 'c', 5));
// }