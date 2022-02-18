/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 04:45:19 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/14 22:58:22 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	half;

	half = size / 2;
	i = -1;
	while (i++ < size-- && i < half)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
	}
}

#include <stdio.h>

int main()
{
    int array[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int i = 0;
    
    ft_rev_int_tab(array, 20);
    while (i < 20)
    {
        printf("%d, ", array[i]);
        i++;
    }
    printf("\n");
}