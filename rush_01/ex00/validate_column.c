/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_column.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:18 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 21:37:41 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	validate_column_up(struct s_Board *board, int x)
{
	int	i;
	int	counter_up;
	int	max_number;

	i = 0;
	max_number = 0;
	counter_up = 0;
	while (i < 4)
	{
		if (board->fields[i][x] > max_number)
		{
			max_number = board->fields[i][x];
			counter_up++;
		}
		i++;
	}
	return (counter_up == board->cues[0][x]);
}

int	validate_column_down(struct s_Board *board, int x)
{
	int	i;
	int	counter_down;
	int	max_number;

	i = 3;
	max_number = 0;
	counter_down = 0;
	while (i >= 0)
	{
		if (board->fields[i][x] > max_number)
		{
			max_number = board->fields[i][x];
			counter_down++;
		}
		i--;
	}
	return (counter_down == board->cues[1][x]);
}

int	validate_column(struct s_Board *board, int x)
{
	return (
		validate_column_up(board, x) && validate_column_down(board, x)
	);
}
