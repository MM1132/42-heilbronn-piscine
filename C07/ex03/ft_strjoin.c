/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:56:58 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/21 23:07:51 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_string_length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// Get the total length of the output string (including the '\0')
int	get_output_length(int size, char**strs, char *sep)
{
	int	index;
	int	length;
	int	separator_length;

	separator_length = get_string_length(sep);
	length = 0;
	index = 0;
	while (index < size)
	{
		length += get_string_length(strs[index]);
		index++;
	}
	length += (size - 1) * separator_length + 1;
	return (length);
}

char	*append_at_index(char *str, char *append_str)
{
	while (*append_str)
	{
		*str = *append_str;
		append_str++;
		str++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		output_length;
	int		index;
	char	*output;
	char	*return_value;

	output_length = get_output_length(size, strs, sep);
	output = (char *)malloc(sizeof(char) * output_length);
	if (!output)
		return (NULL);
	index = 0;
	while (index < output_length)
		output[index++] = 0;
	return_value = output;
	if (!output)
		return (NULL);
	index = 0;
	while (index < size)
	{
		output = append_at_index(output, strs[index]);
		if (index != size - 1)
			output = append_at_index(output, sep);
		index++;
	}
	return (return_value);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*strings[] = { "I think that", "is wrong, but", "is also right" };
// 	char	separator[] = " something ";
// 	char	*output = ft_strjoin(3, strings, separator);

// 	printf("%s\n", output);
// }
