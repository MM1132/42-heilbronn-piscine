/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 02:27:17 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/05 18:42:19 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 'a' - 'A';
		}
		index++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char string1[] = "this Will He all to Uppercase??? ";

	char *uppercase = ft_strupcase(string1);

	printf("%s\n", uppercase);

	return (0);
}
*/
