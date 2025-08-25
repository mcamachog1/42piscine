/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:43:20 by macamach          #+#    #+#             */
/*   Updated: 2025/07/29 13:55:49 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // for use atoi
#include <stdio.h> //  for use printf

int	ft_recursive_factorial(int nb);

int	main(int argc, char *argv[])
{
	int	n;

	if (argc != 2)
	{
		printf("Precisa um numero como parametro\n");
		return (1);
	}
	n = atoi(argv[1]);
	printf("%i! = %i\n", n, ft_recursive_factorial(n));
	return (0);
}
