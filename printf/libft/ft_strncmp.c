/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:03:11 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/16 18:55:53 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && d < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
		d++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
// 	char s1[] = "abcd";
// 	char s2[] = "abcf";
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// 	printf("%d\n", strncmp(s1, s2, 2));
// }