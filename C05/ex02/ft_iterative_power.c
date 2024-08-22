/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:01:08 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/13 21:01:08 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	sum = nb;
	while (power-- > 1)
		sum *= nb;
	return (sum);
}
