/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:14:13 by macamach          #+#    #+#             */
/*   Updated: 2025/07/30 12:29:40 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Siguiente primo >= 0 es: %i\n", ft_find_next_prime(0));
	printf("Siguiente primo >= 1 es: %i\n", ft_find_next_prime(1));
	printf("Siguiente primo >= 2 es: %i\n", ft_find_next_prime(2));
	printf("Siguiente primo >= 3 es: %i\n", ft_find_next_prime(3));
	printf("Siguiente primo >= 4 es: %i\n", ft_find_next_prime(4));
	printf("Siguiente primo >= 5 es: %i\n", ft_find_next_prime(5));
	printf("Siguiente primo >= 6 es: %i\n", ft_find_next_prime(6));
	printf("Siguiente primo >= 7 es: %i\n", ft_find_next_prime(7));
	printf("Siguiente primo >= 10 es: %i\n", ft_find_next_prime(10));
	printf("Siguiente primo >= 15 es: %i\n", ft_find_next_prime(15));
	printf("Siguiente primo >= 20 es: %i\n", ft_find_next_prime(20));
	printf("Siguiente primo >= 104 es: %i\n", ft_find_next_prime(104));
	printf("Siguiente primo >= -3 es: %i\n", ft_find_next_prime(-3));
	return (0);
	
}
