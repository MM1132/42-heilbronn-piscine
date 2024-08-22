/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:38:28 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/07 22:17:51 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	to_uppercase;
	unsigned int	index;

	to_uppercase = 1;
	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			
		}
		index++;
	}
	return (str);
}

// "thAS357is IS-a word right here"
