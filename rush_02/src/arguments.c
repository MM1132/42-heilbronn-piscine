/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:22:17 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 00:40:23 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
	c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*int_number(char *str, int count)
{
	char	*new_string;
	int		i;

	new_string = (char *)malloc((sizeof(char) + 1) * count);
	if (new_string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (1)
	{
		if (i < count)
		{
			new_string[i] = str[i];
			i++;
			continue ;
		}
		break ;
	}
	new_string[i] = 0;
	return (new_string);
}

char	*parse_atoi(char *str)
{
	int		sign;
	int		i;
	char	*number;
	int		sign_counter;

	sign = 1;
	while (is_space(*str))
		str++;
	sign_counter = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		sign_counter++;
		str++;
	}
	if (sign == -1 || sign_counter > 1)
		return (NULL);
	i = 0;
	while (is_numeric(str[i]))
		i++;
	if (i == 0)
		return (NULL);
	number = int_number(str, i);
	return (number);
}
