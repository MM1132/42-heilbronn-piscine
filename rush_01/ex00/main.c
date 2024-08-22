/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:07 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 23:08:56 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int				check_arguments_and_print_errors(int argc, char **argv);
void			print_string(char *str);
struct s_Board	*initialize_board(char *input);
void			free_memory_for_cues_or_fields(int **cues);
void			print_board_fields(struct s_Board *board);
int				solve(struct s_Board *board, int x, int y);

// Check errors of input and launch the solver
int	main(int argc, char **argv)
{
	struct s_Board	*board;

	if (check_arguments_and_print_errors(argc, argv))
	{
		print_string("Error\n");
		return (0);
	}
	board = initialize_board(argv[1]);
	if (solve(board, 0, 0) == 0)
	{
		print_string("Error\n");
		return (0);
	}
	else
	{
		print_board_fields(board);
	}
	free_memory_for_cues_or_fields(board->cues);
	free_memory_for_cues_or_fields(board->fields);
	return (0);
}
