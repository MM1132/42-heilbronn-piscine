/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:22:21 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/19 00:34:45 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

struct s_Dict_Entry
{
	char *number;
	char *word;
};

int					is_numeric(char c);
char				*parse_atoi(char *str);
void				print_string(int mode, char *str);
struct s_Dict_Entry	**get_dict_from_file(char *filename);

#endif
