/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix_with_zero.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:13:02 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/14 01:52:30 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_matrix_with_zero(int g_matrix_size, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < g_matrix_size)
	{
		while (j < g_matrix_size)
		{
			{
				matrix[i][j] = 0;
				j++;
			}
		}
		j = 0;
		i++;
	}
}
