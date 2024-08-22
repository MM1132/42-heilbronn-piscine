/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:05:31 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/04 17:27:54 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != 0)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	// Example
	char destination[] = "Destination";
	char source[] = 	 "Sourcething";

	

	// ###

	char dst[] = "Destination";
	char src[] = "SourceThing";

	ft_strcpy(dst, src);

	printf("Src: %s\nDst: %s\n", src, dst);
}
*/
