/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:15:06 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/16 21:09:00 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}

// int main(void)
// {
// 	char src[] = "Search here:)";
// 	char to_find[] = "eeee";
// 	unsigned int i =0;

// 	char *found = ft_strnstr(src, to_find, 35);
// 	i = 0;

// 	while (found[i] != '\0') i++;
// 	write(1, found, i);

// 	write(1, "\n", 1);

// 	char *found1 = strnstr(src, to_find, 35);
// 	i = 0;

// 	while (found1[i] != '\0') i++;
// 	write(1, found1, i);
// }