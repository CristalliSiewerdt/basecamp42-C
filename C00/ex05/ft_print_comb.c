/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:32:24 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/10 23:18:06 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)

{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{
			while (numbers[2] <= '9')
			{
				write(1, &numbers[0], 1);
				write(1, &numbers[1], 1);
				write(1, &numbers[2], 1);
				numbers[2]++;
				if (numbers[0] < '7')
					write(1, ", ", 2);
			}
			numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
		numbers[0]++;
		numbers[1] = numbers[0] + 1;
		numbers[2] = numbers[1] + 1;
	}
}


int main()
{
	ft_print_comb();
}