/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:44:16 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/14 01:40:32 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	create_matrix(int g_matrix_size, char *observers);
int		validate_input_chars(char *observers, char *argv[]);
int		check_argc_len(int argc);

int	g_matrix_size = 4;

char	*remove_spaces(char *string)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (string[i])
	{
		if (string[i] != ' ')
			string[j++] = string[i];
		i++;
	}
	string[j] = '\0';
	return (string);
}

int	main(int argc, char *argv[])
{
	char	observers[32];

	if (check_argc_len(argc) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else if (validate_input_chars(observers, argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	remove_spaces(observers);
	create_matrix(g_matrix_size, observers);
}
