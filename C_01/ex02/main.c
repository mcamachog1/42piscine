/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:02:44 by macamach          #+#    #+#             */
/*   Updated: 2025/07/23 16:25:20 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int	a;
	int	b;

	a = 74;
	b = 77;
	printf("Los numeros iniciales son: a=%i y  b=%i\n", a, b);
	ft_swap(&a, &b);
	printf("Los numeros finales son: a=%i y  b=%i\n", a, b);
	return (0);
}
