/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:08:17 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/14 22:57:23 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		str++;
		a++;
	}
	return (a);
}

#include <stdio.h>

int main()
{
    char caracter[9] = "athletico";
    ft_putstr(caracter);
	write(1, "\n", 1);

}