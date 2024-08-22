/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:21:59 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/14 22:37:41 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string_endl(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s1[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	if (s1[index] == 0 || s2[index] == 0)
	{
		return (s1[index] - s2[index]);
	}
	return (0);
}

void	ft_sort_str_array(char **str_array, int size)
{
	char	*save_str;
	int		index_first;
	int		index_second;

	index_first = 0;
	while (index_first < size)
	{
		index_second = index_first + 1;
		while (index_second < size)
		{
			if (ft_strcmp(str_array[index_first], str_array[index_second]) > 0)
			{
				save_str = str_array[index_first];
				str_array[index_first] = str_array[index_second];
				str_array[index_second] = save_str;
			}
			index_second++;
		}
		index_first++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*program_name;

	program_name = argv[0];
	ft_sort_str_array(argv, argc);
	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(program_name, argv[i]) != 0)
			print_string_endl(argv[i]);
		i++;
	}
	return (0);
}
