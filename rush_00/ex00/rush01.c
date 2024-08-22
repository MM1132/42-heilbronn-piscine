/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:47:25 by djanardh          #+#    #+#             */
/*   Updated: 2024/08/05 00:32:11 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include "ft_putchar.c"*/
void	ft_putchar(char c);

void	print_a_character_based_on_coordinates(int r, int c, int x, int y)
{
	if (r == 1 && c == 1)
		ft_putchar('/');
	else if ((r == y && c == 1) || (r == 1 && c == x))
		ft_putchar('\\');
	else if (r == y && c == x)
		ft_putchar('/');
	else if (r == 1 || r == y)
		ft_putchar('*');
	else if (c == 1 || c == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush01(int x, int y)
{
	int	r;
	int	c;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			print_a_character_based_on_coordinates(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
