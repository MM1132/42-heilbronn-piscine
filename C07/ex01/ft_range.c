/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:10:23 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/15 21:10:25 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pointer;
	int	count;
	int	index;

	if (min >= max)
		return (NULL);
	count = max - min;
	pointer = (int *)malloc(sizeof(int) * count);
	index = 0;
	while (index < count)
	{
		pointer[index] = index + min;
		index++;
	}
	return (pointer);
}
