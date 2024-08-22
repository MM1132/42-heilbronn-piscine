/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:35:42 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/13 17:35:43 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	if (nb < 0)
	{
		sum = 0;
	}
	else
	{
		sum = 1;
	}
	while (nb > 0)
	{
		sum *= nb--;
	}
	return (sum);
}
