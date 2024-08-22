/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:35:59 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/01 17:29:24 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index_start;
	int	save_start;

	index_start = 0;
	while (index_start < size / 2)
	{
		save_start = tab[index_start];
		tab[index_start] = tab[size - index_start - 1];
		tab[size - index_start - 1] = save_start;
		index_start++;
	}
}
