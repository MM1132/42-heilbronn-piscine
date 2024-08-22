/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:22:17 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/06 16:56:41 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*find_from_string(char *str, char *to_find, int len)
{
	int	index;

	index = 0;
	while (to_find[index] != 0)
	{
		if (str[index] == to_find[index])
		{
			index++;
			if (index == len)
			{
				return (str);
			}
			continue ;
		}
		if (str[index] == 0)
		{
			return (NULL);
		}
		break ;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	char	*found;

	if (*to_find == 0)
	{
		return (str);
	}
	len = ft_strlen(to_find);
	while (*str)
	{
		found = find_from_string(str, to_find, len);
		if (found != NULL)
		{
			return (found);
		}
		str++;
	}
	return (NULL);
}
