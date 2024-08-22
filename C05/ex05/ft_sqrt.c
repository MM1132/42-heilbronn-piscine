/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:27:40 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/15 14:44:13 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;
	int	answer;

	if (nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	number = 1;
	while (number <= 46340)
	{
		answer = number * number;
		if (answer >= nb)
		{
			if (answer == nb)
				return (number);
			break ;
		}
		number++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	number = 2147395600;
	printf("The sqrt of %d is => %d\n", number, ft_sqrt(number));
	return (0);
}
 */