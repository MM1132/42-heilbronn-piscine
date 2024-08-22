/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:54:37 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/03 16:59:03 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!(str[index] >= ' ' && str[index] <= '~'))
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
	// If only lowercase, return 1, otherwise return 0
	char	false1[] = "This is not";
	char	false2[] = "here also not";
	char	false3[] = "thisisatest2";
	char	false4[] = "Hello";
	
	char	true1[] = "hereareonlylowercase";
	char	true2[] = "this";
	char	true3[] = "h";
	char	true4[] = "llllklklaslldlalslldllwllwelwlelqw";

	// False
	printf("F1: %d\nF2: %d\nF3: %d\nF4: %d\n",
		ft_str_is_lowercase(false1),
		ft_str_is_lowercase(false2),
		ft_str_is_lowercase(false3),
		ft_str_is_lowercase(false4)
	);

	// True
	printf("T1: %d\nT2: %d\nT3: %d\nT4: %d\n",
		ft_str_is_lowercase(true1),
		ft_str_is_lowercase(true2),
		ft_str_is_lowercase(true3),
		ft_str_is_lowercase(true4)
	);
}
*/
