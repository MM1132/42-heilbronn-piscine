/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:23 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 23:07:12 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"

void	print_string(char *str)
{
	if (*str != 0)
	{
		write(1, str, 1);
		print_string(++str);
	}
}

void	print_board_fields(struct s_Board *board)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = board->fields[i][j] + 48;
			write(1, &c, 1);
			if (j < 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		print_string("\n");
		i++;
	}
}
