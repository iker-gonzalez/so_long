/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:40:59 by ikgonzal          #+#    #+#             */
/*   Updated: 2021/12/12 12:58:34 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_ber(char *argv)
{
	int	i;
	int	e;

	i = 0;
	e = 0;
	while (argv[i] != '.')
		i++;
	i++;
	if (argv[i] != 'b')
		e++;
	i++;
	if (argv[i] != 'e')
		e++;
	i++;
	if (argv[i] != 'r')
		e++;
	if (e != 0)
	{
		write (1, "Error\n", 6);
		exit (0);
	}
}
