/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:11:38 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/04 19:47:07 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != 0 && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "SOMETHING";
	char	dst[] = "something";

	ft_strncpy(dst, src, 9);

	printf("Src: %s\nDst: %s\n", src, dst);

	return (0);
}
*/
