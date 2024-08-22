/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:10 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 21:37:41 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

// Return 0 if the number cannot be entered in the specified field
// Return 1 if it can
int	can_be_entered_into_board(struct s_Board *board, int x, int y, int number)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board->fields[i][x] == number || board->fields[y][i] == number)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
