/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:18:09 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/20 20:59:22 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return -1 if invalid, else return base length
int	validate_base(char *base)
{
	int	first_index;
	int	second_index;

	first_index = 0;
	while (base[first_index])
	{
		if (base[first_index] == '-' || base[first_index] == '+')
			return (-1);
		second_index = 1;
		while (base[first_index + second_index])
		{
			if (base[first_index] == base[first_index + second_index])
				return (-1);
			second_index++;
		}
		first_index++;
	}
	if (first_index == 0)
		return (-1);
	return (first_index);
}

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
	c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	get_index_in_string(char *str, char c)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	calculate_result(int base_length, char *base, char *str)
{
	int	result;
	int	index_in_base;

	result = 0;
	while (1)
	{
		index_in_base = get_index_in_string(base, *str);
		if (index_in_base == -1)
			break ;
		result = result * base_length + index_in_base;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_length;
	int	sign;
	int	result;

	base_length = validate_base(base);
	if (base_length == -1)
		return (0);
	while (is_space(*str))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = calculate_result(base_length, base, str);
	return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	number[] = "-1";
// 	char	base[] = "0123456789abcdef";
// 	int		converted_number = ft_atoi_base(number, base);

// 	printf("From atoi_base => %d\n", converted_number);
// }
