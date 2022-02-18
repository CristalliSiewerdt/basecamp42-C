/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:02:48 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/16 22:01:14 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

#include <stdio.h>
int	main()
{
	unsigned int n = 3;
	char dest[n];
	char src[] = "Teste";
	char *pointer;

	pointer = ft_strncpy(dest, src, n);

	for(int i = 0; i<(int)n; i++)
	{
		printf("%c", pointer[i]);
	}
	printf("\n%s\n", pointer);
}