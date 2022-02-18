/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:05:26 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/15 00:16:35 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main()
{
	int n1;
	int n2;

	n1 = 14;
	n2 = 3;

	int div;
	int mod;
	
	ft_div_mod(n1, n2, &div, &mod);

	printf("Valor da divisão é: %d\n", div);
	printf("Valor do resto é: %d\n", mod);
}
