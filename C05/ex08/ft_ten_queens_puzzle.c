/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:06:35 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 11:31:25 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_positions(int *positions)
{
	char	position;
	int		index;

	index = 0;
	while (index < 10)
	{
		position = positions[index++] + '0';
		write(1, &position, 1);
	}
	write(1, "\n", 1);
}

int	can_be_placed_into_position(int *positions, int row, int column)
{
	int	i;
	int	column_offset;

	i = 0;
	while (i < 10)
	{
		if (positions[i] == -1)
		{
			i++;
			continue ;
		}
		if (positions[i] == row)
			return (0);
		column_offset = column - i;
		if ((positions[i] - column_offset == row)
			|| (positions[i] + column_offset == row))
			return (0);
		i++;
	}
	return (1);
}

int	solve_recursively(int *positions, int column)
{
	int	row;
	int	solutions;

	solutions = 0;
	if (column == 10)
	{
		print_positions(positions);
		return (1);
	}
	row = 0;
	while (row < 10)
	{
		if (can_be_placed_into_position(positions, row, column))
		{
			positions[column] = row;
			solutions += solve_recursively(positions, column + 1);
			positions[column] = -1;
		}
		row++;
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int	positions[10];
	int	i;
	int	solutions;

	i = 0;
	while (i < 10)
	{
		positions[i] = -1;
		i++;
	}
	solutions = solve_recursively(positions, 0);
	return (solutions);
}
