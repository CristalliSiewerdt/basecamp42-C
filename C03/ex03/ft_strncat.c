/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:18:31 by tcrastal          #+#    #+#             */
/*   Updated: 2022/02/17 20:46:23 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	b;
	unsigned int	a;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while ((src[b] != '\0') && (b < nb))
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}


#include <stdio.h>

int main()
{
	char src[] = "Pindamonhangaba";
	char dest[] = "Fabio ";
	
	ft_strncat(dest, src, 14);
	printf("Concatenado = %s\n", dest);
	return (0);
}


void ex03()
{
    char str[] = "abcd";
    char to_find[] = "efgh";
    int n = 1;
    
    printf("Resposta esperaba: sbfsbas\nSua função retornou: %s\n\n", ft_strncat(str, to_find, n));
    
}


int main(void)
{
    printf("\n\n---EX03---\n\n");
    ex03();
    return (0);
}