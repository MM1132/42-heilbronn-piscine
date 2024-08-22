/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:13 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 21:47:35 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	can_be_entered_into_board(struct s_Board *board, int x, int y, int number);
int	validate_row(struct s_Board *board, int y);
int	validate_column(struct s_Board *board, int x);
int	solve_one_cell(struct s_Board *board, int x, int y);

// Return 1 if we found the solution
// Return 0 if we did not find the solution
int	solve(struct s_Board *board, int x, int y)
{
	if (y == 4)
	{
		return (1);
	}
	else if (x == 4)
	{
		if (validate_row(board, y))
		{
			return (solve(board, 0, y + 1));
		}
		return (0);
	}
	else if (board->fields[y][x] != 0)
	{
		return (solve(board, x + 1, y));
	}
	else
	{
		return (solve_one_cell(board, x, y));
	}
}

int	solve_one_cell(struct s_Board *board, int x, int y)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (can_be_entered_into_board(board, x, y, i))
		{
			board->fields[y][x] = i;
			if ((y == 3 && validate_column(board, x)) || y != 3)
			{
				if (solve(board, x + 1, y))
				{
					return (1);
				}
			}
			board->fields[y][x] = 0;
		}
		i++;
	}
	return (0);
}
