/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:19:52 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/17 15:16:32 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	insert;

	insert = nb;
	if (insert < 0)
	{
		ft_putchar('-');
		insert *= -1;
	}
	if (insert >= 0)
	{
		if (insert >= 10)
			ft_putnbr(insert / 10);
		ft_putchar((insert % 10) + 48);
	}
}
