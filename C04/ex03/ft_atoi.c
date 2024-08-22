/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:59:46 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/13 14:15:53 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_negative(char *str)
{
	int	counter;

	counter = 0;
	while (*str != 0)
	{
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
			{
				counter++;
			}
		}
		str++;
	}
	return (counter % 2 == 1);
}

char	*skip_spaces(char *str)
{
	while (*str == '\t' || *str == '\n' || *str == '\v'\
		|| *str == '\f' || *str == '\r' || *str == ' ')
	{
		str++;
	}
	return (str);
}

char	*skip_signs(char *str)
{
	while (*str == '+' || *str == '-')
	{
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	output;
	int	minus;

	minus = is_negative(str);
	str = skip_spaces(str);
	str = skip_signs(str);
	output = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			output += *str - 48;
			if (str[1] >= '0' && str[1] <= '9')
				output *= 10;
		}
		else
		{
			break ;
		}
		str++;
	}
	if (minus)
		output *= -1;
	return (output);
}
