/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:32:22 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/13 21:56:32 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (dest[index])
	{
		index++;
	}
	while (*src)
	{
		dest[index] = *src;
		index++;
		src++;
	}
	dest[index] = 0;
	return (dest);
}
