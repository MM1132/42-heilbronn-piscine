/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:16:19 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/03 16:57:45 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
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
	char	false1[] = "This is not";
	char	false2[] = "HERE IS NOT ALL UPPERCASE";
	char	false3[] = "thisisatest2";
	char	false4[] = "hello";
	
	char	true1[] = "UPPER";
	char	true2[] = "THISISALOSALLUPPERCASE";
	char	true3[] = "H";
	char	true4[] = "";

	// False
	printf("F1: %d\nF2: %d\nF3: %d\nF4: %d\n",
		ft_str_is_uppercase(false1),
		ft_str_is_uppercase(false2),
		ft_str_is_uppercase(false3),
		ft_str_is_uppercase(false4)
	);

	// True
	printf("T1: %d\nT2: %d\nT3: %d\nT4: %d\n",
		ft_str_is_uppercase(true1),
		ft_str_is_uppercase(true2),
		ft_str_is_uppercase(true3),
		ft_str_is_uppercase(true4)
	);
}
*/
