/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:59:51 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/21 23:05:34 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_str_len(char *str)
{
	int	len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*pointer;
	int		length;
	int		index;

	length = get_str_len(src);
	pointer = ((char *)malloc(sizeof(char) * length + 1));
	if (!pointer)
		return (NULL);
	index = 0;
	while (index < length)
	{
		pointer[index] = src[index];
		index++;
	}
	pointer[index] = 0;
	return (pointer);
}
