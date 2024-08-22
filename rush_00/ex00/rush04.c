/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:04:58 by vvardhir          #+#    #+#             */
/*   Updated: 2024/08/05 00:51:29 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include "ft_putchar.c"*/
void	ft_putchar(char c);

#include <unistd.h>
void	print_a_character_based_on_coordinates(int r, int c, int x, int y)
{
	usleep(100000);
	if (r == 1 && c == 1)
		ft_putchar('A');
	else if ((r == y && c == 1) || (r == 1 && c == x))
		ft_putchar('C');
	else if (r == y && c == x)
		ft_putchar('A');
	else if (r == 1 || r == y || c == 1 || c == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush04(int x, int y)
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

/*int main()
{
    rush04(-4, 2);
    return (0);
}*/ /**/
