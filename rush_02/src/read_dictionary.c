/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:11:38 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 00:42:05 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

struct s_Dict_Entry	**get_dict_from_file(char *filename)
{
	int					file_status;
	char				file_contents[1024];
	int					read_size;

	file_status = open(filename, O_RDONLY);
	if (file_status == -1)
	{
		return (NULL);
	}
	read_size = read(file_status, file_contents, 1024);
	if (read_size == -1)
	{
		return (NULL);
	}
	return (NULL);
}
