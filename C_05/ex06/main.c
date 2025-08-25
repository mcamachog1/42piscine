/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:55:23 by macamach          #+#    #+#             */
/*   Updated: 2025/07/30 12:31:03 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("0 es primo?: %i\n", ft_is_prime(0));
	printf("1 es primo?: %i\n", ft_is_prime(1));
	printf("2 es primo?: %i\n", ft_is_prime(2));
	printf("3 es primo?: %i\n", ft_is_prime(3));
	printf("4 es primo?: %i\n", ft_is_prime(4));
	printf("5 es primo?: %i\n", ft_is_prime(5));
	printf("6 es primo?: %i\n", ft_is_prime(6));
	printf("7 es primo?: %i\n", ft_is_prime(7));
	printf("8 es primo?: %i\n", ft_is_prime(8));
	printf("9 es primo?: %i\n", ft_is_prime(9));
	printf("10 es primo?: %i\n", ft_is_prime(10));
	printf("11 es primo?: %i\n", ft_is_prime(11));
	printf("-5 es primo?: %i\n", ft_is_prime(-5));
	printf("101 es primo?: %i\n", ft_is_prime(101));
	return(0);
}
