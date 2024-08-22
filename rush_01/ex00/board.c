/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:27 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 21:37:41 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers.h"

int	**allocate_memory_for_cues_or_fields(void)
{
	int	**cues;
	int	index;

	cues = malloc(4 * SIZEOF_INT_POINTER);
	index = 0;
	while (index < 4)
	{
		cues[index] = malloc(4 * SIZEOF_INT);
		index++;
	}
	return (cues);
}

void	free_memory_for_cues_or_fields(int **cues_or_fields)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		free(cues_or_fields[index]);
		index++;
	}
	free(cues_or_fields);
}

int	**get_numbers_from_input(char *input)
{
	int	**cues;
	int	index;
	int	number_index;

	cues = allocate_memory_for_cues_or_fields();
	index = 0;
	while (input[index] != 0)
	{
		number_index = index / 2;
		if (input[index] >= '0' && input[index] <= '9')
		{
			cues[number_index / 4][number_index % 4] = (int)input[index] - 48;
		}
		index++;
	}
	return (cues);
}

void	initialize_fields(int **fields)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			fields[i][j] = 0;
			j++;
		}
		i++;
	}
}

struct s_Board	*initialize_board(char *input)
{
	struct s_Board	*board;

	board = malloc(SIZEOF_BOARD);
	board->cues = get_numbers_from_input(input);
	board->fields = allocate_memory_for_cues_or_fields();
	initialize_fields(board->fields);
	return (board);
}
