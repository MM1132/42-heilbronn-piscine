/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:29 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 23:06:55 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_string(char *str);

int	check_errors_for_input(char *str, int index)
{
	if (index % 2 == 0)
	{
		if ((str[index] >= '1' && str[index] <= '4') == 0)
		{
			return (1);
		}
	}
	else
	{
		if (str[index] != ' ')
		{
			return (1);
		}
	}
	return (0);
}

// Return 0 for no errors
// Return 1 for errors
// Also, print all errors that occurred
int	check_arguments_and_print_errors(int argc, char **argv)
{
	int	index;

	index = 0;
	while (argv[1][index] != 0)
	{
		if (check_errors_for_input(argv[1], index) == 1)
		{
			return (1);
		}
		index++;
	}
	if (index != 31 || argc != 2)
	{
		return (1);
	}
	return (0);
}
