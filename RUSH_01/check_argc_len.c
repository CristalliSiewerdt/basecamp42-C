/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:25:45 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/13 23:43:40 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_argc_len(int argc)
{
	if (argc < 2 || argc > 2)
	{
		return (1);
	}
	else
		return (0);
}
