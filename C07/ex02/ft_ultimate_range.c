/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:11:10 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/22 17:00:28 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;

	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (-1);
	}
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	index = 0;
	while (index < size)
	{
		(*range)[index] = index + min;
		index++;
	}
	return (size);
}

// void	print_int_range(int *range, int size)
// {
// 	// printf("Range: %d\n", *range[0]);
// 	for(int i = 0; i < size; i++)
// 	{
// 		printf("Int: %d\n", range[i]);
// 	}
// }

// void	print_str(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// int	main()
// {
// 	int	**range;

// 	int	count = ft_ultimate_range(range, 4, 10);
// 	print_int_range(*range, count);

// 	free(*range);
// 	return (0);
// }
// int	main(int argc, char **argv)
// {
// 	// printf("Argv: %s\n", argv[0]);
// 	print_str(argv[0]);
// }