/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:34:38 by macamach          #+#    #+#             */
/*   Updated: 2025/07/23 16:12:40 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*ptr_int;
	int	n;

	n = 49; 
	printf("Entero inicial (49): %i\n", n);
	ptr_int = &n;
	ft_ft(ptr_int);
	printf("Entero final (42): %d\n", n);

}
