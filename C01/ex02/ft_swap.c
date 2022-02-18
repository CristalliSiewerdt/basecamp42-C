/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:55:52 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/15 15:15:39 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main()
{
	int n1 = 14;
	int n2 = 41;

	printf("n1: %d\nn2: %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("swap\n");
	printf("n1: %d\nn2: %d\n", n1, n2);
}