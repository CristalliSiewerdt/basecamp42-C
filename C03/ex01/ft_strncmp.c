/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristal <tcristal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:56:53 by tcristal          #+#    #+#             */
/*   Updated: 2022/02/18 02:36:33 by tcristal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int		i;
	int					value;

	i = 0;
	value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		value = (s1[i] - s2[i]);
		i++;
		if (value != 0)
		{
			return (value);
		}
	}
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
