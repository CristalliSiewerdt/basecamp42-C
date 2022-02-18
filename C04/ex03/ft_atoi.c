/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:06:42 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/18 20:04:09 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative;
	int a;
	int sum;
	int space;

	negative = 0;
	a = 0;
	sum = 0;
	space = 0;
	while ((str[a] < '0' || str[a] > '9') || (str[a] != '\0'))
	{
		if (str[a] == '-')
		{
			negative++;
			if (str[a] >= 'A' || str[a] <= 'z')
			{
				return (0);
			}
			if (space && str[a] == ' ')
			{
				return (0);
			}
		a++;
		}
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		sum = (str[a] - '0') + (sum * 10);
		a++;
	}
	if (negative % 2 == 0)
	{
		return (sum);
	}
	sum = sum * -1;
	return (sum);
}

#include <stdio.h>

int main()
{
  printf("\n---- ft_atoi --- ex03:\n");
    printf("1 - tem que ser : -1234, é : %d\n", ft_atoi(" ---+--+1234ab567"));
    printf("2 - tem que ser : 1234, é : %d\n", ft_atoi(" --+--+1234ab567"));
    printf("3 - tem que ser : -1234, é : %d\n", ft_atoi("---+--+1234ab567"));
    printf("4 - tem que ser : 1234, é : %d\n", ft_atoi("   1234ab567"));
    printf("5 - tem que ser : 1234, é : %d\n", ft_atoi("1234ab567"));
    printf("6 - tem que ser : 0, é : %d\n", ft_atoi(" ---+--+ 1234ab567"));
    printf("7 - tem que ser : -1234, é : %d\n", ft_atoi(" ---+--+1234+b567"));
    printf("8 - tem que ser : 0, é : %d\n", ft_atoi(" ---+--+A1234+r567"));
    printf("9 - tem que ser : 0, é : %d\n", ft_atoi("A"));
    printf("10 - tem que ser : 0, é : %d\n", ft_atoi("-0"));
    printf("11 - tem que ser : -2147483648, é : %d\n", ft_atoi("-2147483648"));
    printf("12 - tem que ser : 2147483647, é : %d\n", ft_atoi("2147483647"));
}
