/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:20:10 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/14 01:53:25 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_matrix_with_zero(int g_matrix_size, int **matrix);
void	verify_4_and_1(char *observers, int g_matrix_size, int	**matrix);
void	write_matrix(int g_matrix_size, int **matrix);

void	select_and_put_char(char *observers, int g_matrix_size, int **matrix)
{
	fill_matrix_with_zero(g_matrix_size, matrix);
	verify_4_and_1(observers, g_matrix_size, matrix);
	write_matrix(g_matrix_size, matrix);
}

void	create_matrix(int g_matrix_size, char *observers)
{
	int	**matrix;
	int	ptr_matrix;

	ptr_matrix = 0;
	matrix = malloc(sizeof (int *) * g_matrix_size);
	while (ptr_matrix < g_matrix_size)
	{
		matrix[ptr_matrix] = malloc(sizeof (int) * g_matrix_size);
		ptr_matrix++;
	}
	select_and_put_char(observers, g_matrix_size, matrix);
	free(matrix);
}
