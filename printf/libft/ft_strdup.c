/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurawsk <amurawsk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:24:31 by amurawsk          #+#    #+#             */
/*   Updated: 2022/12/16 21:55:23 by amurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_src;
	int		i;

	i = 0;
	new_src = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (new_src == NULL)
		return (NULL);
	while (s1[i])
	{
		new_src[i] = s1[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}

// int main(void)
// {
// 	char *src = "Something to copy:)";
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		i++;
// 	}
// 	write(1,src, i+1);
// 	write(1,"\n",1);
// 	write(1,ft_strdup(src), i+1);
// 	write(1,"\n",1);
// }
