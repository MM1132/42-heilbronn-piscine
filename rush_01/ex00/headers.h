/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:31:20 by rreimann          #+#    #+#             */
/*   Updated: 2024/08/11 21:38:29 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_Board
{
	int	**cues;
	int	**fields;
};

#define SIZEOF_BOARD 16
#define SIZEOF_INT_POINTER 8
#define SIZEOF_INT 4
