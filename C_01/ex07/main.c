/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:16:13 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 16:40:39 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *a, int size);

int	main(void)
{
	int	arreglo[4];
	int	i;

	arreglo[0] = 72;
	arreglo[1] = 79;
	arreglo[2] = 76;
	arreglo[3] = 65;
	i = 0;
	while (i < 4)
	{
		printf("%i\n", arreglo[i]);
		// write(1, &arreglo[i], 1);
		i++;
	}
	ft_rev_int_tab(arreglo, 4);
	i = 0;
	while (i < 4)
	{
		printf("%i", arreglo[i]);
		// write(1, &arreglo[i], 1);
		i++;
	}
}
