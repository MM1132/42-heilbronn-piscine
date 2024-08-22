/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:13:46 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/05 22:18:51 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (s1[index] && s1[index] && index < n)
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
