/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:00:16 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/07 21:19:05 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

// #include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	append_length;
	unsigned int	index;
	unsigned int	dest_len;
	unsigned int	first_index;

	first_index = 0;
	while (dest[first_index])
	{
		first_index++;
	}
	dest_len = ft_strlen(dest);
	append_length = size - dest_len - 1;
	index = 0;
	while (index < append_length)
	{
		dest[first_index + index] = src[index];
		index++;
	}
	dest[first_index + index] = '\0';
	return (dest_len + ft_strlen(src));
}

/* #include <stdio.h>
int main(void)
{
    char dest[] = "the firsta";
    char src[] = "and the second";

    unsigned int return_value = ft_strlcat(dest, src, 11);

    printf("Return Value: %d\nNew strig: \"%s\"\n", return_value, dest);

    return (0);
} */
