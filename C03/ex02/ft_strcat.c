/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:58:35 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/17 20:27:51 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)

{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
int main()
{
	char src[] = "de C.";
	char dest[] = " Curso ";
	
	ft_strcat(dest, src);
	printf("Concatenado = %s\n", src);
	return (0);
}

#include <stdio.h>
int main()
{
    char dest[50]= "Eu vou me tornar um ";
    char src[] = "Cadete da 42";

    ft_strcat(dest, src);

    printf("%s\n", dest);
}

#include <stdio.h>

int main()
{
	char src[] = "programação";
	char dest[25] = "Curso de ";
	
	ft_strcat(dest, src);
	printf("Concatenado = %s\n", dest);
	return (0);
}
