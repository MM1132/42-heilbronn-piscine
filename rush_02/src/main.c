/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:22:27 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 00:41:37 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char				*input_string;
	char				*number;
	char				*dict_filename;
	struct s_Dict_Entry	**dictionary;

	if (argc == 2)
	{
		number = argv[1];
		dict_filename = "./resources/numbers.dict";
	}
	else if (argc == 3)
	{
		number = argv[2];
		dict_filename = argv[1];
	}
	else
		return (print_string(2, "Error\n"), 1);
	input_string = parse_atoi(number);
	if (input_string == NULL)
		return (print_string(2, "Error\n"), 1);
	dictionary = get_dict_from_file(dict_filename);
	if (dictionary == NULL)
		return (print_string(2, "Dict Error\n"), 1);
	print_string(0, input_string);
	free(input_string);
}
