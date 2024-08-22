/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:12:56 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/03 12:46:33 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
		{
			if (!(str[index] >= 'a' && str[index] <= 'z'))
			{
				return (0);
			}
		}
		index++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char example1[] = "12523jalksjlNot only alhabet";
	char example2[] = "thisISonlyAlphabetere";
	char example3[] = "ThisIsNOTonlyAlphabet!";
	char example4[] = " thisisdefinitelynotonlyALPHABET";
	char example5[] = "hello";

	printf("%d, %d, %d, %d, %d\n", 
			ft_str_is_alpha(example1), 
			ft_str_is_alpha(example2), 
			ft_str_is_alpha(example3), 
			ft_str_is_alpha(example4),
			ft_str_is_alpha(example5)
	);
}
*/
