/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:41:50 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/06 12:20:17 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	index_dest;

	if (nb <= 0)
	{
		return (dest);
	}
	index_dest = 0;
	while (dest[index_dest])
	{
		index_dest++;
	}
	index = 0;
	while (src[index] && index < nb)
	{
		dest[index_dest + index] = src[index];
		index++;
	}
	if (src[index] == '\0' || index >= nb)
	{
		dest[index_dest + index] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string1[] = "Hello \0--------------";
	char	string2[] = "World!";

	ft_strncat(string1, string2, 5);
	printf("Old: %s\nNew: %s\n", string1, string2);

	return (0);
}
*/
