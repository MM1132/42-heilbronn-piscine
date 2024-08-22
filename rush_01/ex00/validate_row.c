/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:15 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 21:37:41 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	validate_row_left(struct s_Board *board, int y)
{
	int	i;
	int	max_number;
	int	left_counter;

	left_counter = 0;
	max_number = 0;
	i = 0;
	while (i < 4)
	{
		if (board->fields[y][i] > max_number)
		{
			max_number = board->fields[y][i];
			left_counter++;
		}
		i++;
	}
	return (board->cues[2][y] == left_counter);
}

int	validate_row_right(struct s_Board *board, int y)
{
	int	i;
	int	max_number;
	int	right_counter;

	right_counter = 0;
	max_number = 0;
	i = 3;
	while (i >= 0)
	{
		if (board->fields[y][i] > max_number)
		{
			max_number = board->fields[y][i];
			right_counter++;
		}
		i--;
	}
	return (board->cues[3][y] == right_counter);
}

// Validate the given row with the cues
// Return 0 if not valid
// Return 1 if is valid
int	validate_row(struct s_Board *board, int y)
{
	return (
		validate_row_left(board, y) && validate_row_right(board, y)
	);
}
