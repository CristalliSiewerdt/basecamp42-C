/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input_chars.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:08:53 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/14 01:42:12 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_input_chars(char *observers, char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= '1' && argv[1][i] <= '4') || argv[1][i] == ' ')
		{
			observers[i] = argv[1][i];
			i++;
		}
		else
		{
			return (1);
		}
	}
	if (i < 31)
	{
		return (1);
	}
	return (0);
}
