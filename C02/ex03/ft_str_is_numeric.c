/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:47:21 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/03 12:59:54 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	false1[] = "these are not numbers";
	char	false2[] = "52345341231 ";
	char	false3[] = "135a5324534";
	char	false4[] = "p1278901234567890";
	char	true1[] = "0";
	char	true2[] = "123";
	char	true3[] = "1234567890123456789";
	char	true4[] = "9934238782301";

	printf("False1: %d\nFalse2: %d\nFalse3: %d\nFalse4: %d\n",
		ft_str_is_numeric(false1),
		ft_str_is_numeric(false2),
		ft_str_is_numeric(false3),
		ft_str_is_numeric(false4)
	);

	printf("True1: %d\nTrue2: %d\nTrue3: %d\nTrue4: %d\n",
		ft_str_is_numeric(true1),
		ft_str_is_numeric(true2),
		ft_str_is_numeric(true3),
		ft_str_is_numeric(true4)
	);
}
*/
