/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_4_and_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:51:05 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/14 01:51:11 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	verify_up(int count_2, char *obs, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (count_2 <= 3)
	{
		if (obs[count_2] == '4')
		{
			while (i <= 3)
			{
				matrix[i][count_2] = (i + 1);
				i++;
			}
			i = 0;
		}
		else if (obs[count_2] == '1')
		{
			matrix[0][count_2] = 4;
		}
		count_2++;
	}
}

void	verify_down(int count_2, char *obs, int g_mtx_s, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (count_2 >= 4 && count_2 <= 7)
	{
		if (obs[count_2] == '4')
		{
			while (i <= 3)
			{
				matrix[i][(count_2 - g_mtx_s)] = (i + 1);
				i++;
			}
			i = 0;
		}
		else if (obs[count_2] == '1')
		{
			matrix[(g_mtx_s - 1)][(count_2 - g_mtx_s)] = 4;
		}
		count_2++;
	}
}

void	verify_left(int count_2, char *obs, int g_mtx_s, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (count_2 >= 8 && count_2 <= 11)
	{
		if (obs[count_2] == '4')
		{
			while (j <= 3)
			{
				matrix[(count_2 - (g_mtx_s * 2))][j] = (j + 1);
				j++;
			}
			j = 0;
		}
		else if (obs[count_2] == '1')
		{
			matrix[(count_2 - (g_mtx_s * 2))][0] = 4;
		}
		count_2++;
	}
}

void	verify_right(int count_2, char *obs, int g_mtx_s, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (count_2 >= 12 && count_2 <= 15)
	{
		if (obs[count_2] == '4')
		{
			while (j <= 3)
			{
				matrix[(count_2 - (g_mtx_s * 3))][j] = (j + 1);
				j++;
			}
			j = 0;
		}
		else if (obs[count_2] == '1')
		{
			matrix[(count_2 - (g_mtx_s * 3))][(g_mtx_s - 1)] = 4;
		}
		count_2++;
	}
}

void	verify_4_and_1(char *observers, int g_matrix_size, int	**matrix)
{
	int	i;
	int	j;
	int	count_2;

	i = 0;
	j = 0;
	count_2 = 0;
	while (count_2 <= 15)
	{
		verify_up(count_2, observers, matrix);
		verify_down(count_2, observers, g_matrix_size, matrix);
		verify_left(count_2, observers, g_matrix_size, matrix);
		verify_right(count_2, observers, g_matrix_size, matrix);
		count_2++;
	}
}
