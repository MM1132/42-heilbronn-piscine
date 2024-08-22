/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:28:24 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 12:51:20 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divider;

	if (nb <= 1)
		return (0);
	divider = 2;
	if (divider < nb && nb % divider == 0)
		return (0);
	divider++;
	while (divider < nb)
	{
		if (nb % divider == 0)
		{
			return (0);
		}
		divider += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
