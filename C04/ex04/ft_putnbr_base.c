/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:40:13 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 16:37:51 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (first_index <= 1)
		return (-1);
	return (first_index);
}

int	to_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int base_length)
{
	if (nbr / base_length)
		ft_putnbr_base_recursive(nbr / base_length, base, base_length);
	write(1, &base[to_abs(nbr % base_length)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;

	base_length = validate_base(base);
	if (base_length == -1)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	ft_putnbr_base_recursive(nbr, base, base_length);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		number = 123;
// 	char	base[] = "a";

// 	ft_putnbr_base(number, base);
// }
