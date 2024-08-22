/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:21:33 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/13 14:16:51 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_number_recursive(int number)
{
	char	number_as_char;

	if (number > 0)
	{
		print_number_recursive(number / 10);
		number_as_char = (number % 10) + 48;
		write (1, &number_as_char, 1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		print_number_recursive(nb);
	}
}
