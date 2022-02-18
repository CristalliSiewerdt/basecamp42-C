/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:06:50 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/14 22:36:48 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
#include <stdio.h>

int main()
{
    int a = 0;
    int *n1;
    int **n2;
    int ***n3;
    int ****n4;
    int *****n5;
    int ******n6;
    int *******n7;
    int ********n8;
    int *********n9;

    n1 = &a;
    n2 = &n1;
    n3 = &n2;
    n4 = &n3;
    n5 = &n4;
    n6 = &n5;
    n7 = &n6;
    n8 = &n7;
    n9 = &n8;
    
    ft_ultimate_ft(n9);
    printf("%d\n", a);
}