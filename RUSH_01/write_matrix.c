/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:12:35 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/14 01:53:15 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_matrix(int g_matrix_size, int **matrix)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	while (i < g_matrix_size)
	{
		while (j < g_matrix_size)
		{
			{
				c = matrix[i][j] + 48;
				write(1, &c, 1);
				write(1, " ", 1);
				j++;
			}
		}
		j = 0;
		i++;
		write(1, "\n", 1);
	}
}
