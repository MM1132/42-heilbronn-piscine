/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:39:35 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/01 17:57:40 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	save_integer;
	int	index_first;
	int	index_second;

	index_first = 0;
	while (index_first < size)
	{
		index_second = index_first + 1;
		while (index_second < size)
		{
			if (tab[index_first] > tab[index_second])
			{
				save_integer = tab[index_first];
				tab[index_first] = tab[index_second];
				tab[index_second] = save_integer;
			}
			index_second++;
		}
		index_first++;
	}
}
