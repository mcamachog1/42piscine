/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:05:01 by macamach          #+#    #+#             */
/*   Updated: 2025/07/30 13:43:49 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("Para index: 0, valor: %i\n", ft_fibonacci(0));
	printf("Para index: 1, valor: %i\n", ft_fibonacci(1));
	printf("Para index: 2, valor: %i\n", ft_fibonacci(2));
	printf("Para index: 3, valor: %i\n", ft_fibonacci(3));
	printf("Para index: 4, valor: %i\n", ft_fibonacci(4));
	printf("Para index: 5, valor: %i\n", ft_fibonacci(5));
	printf("Para index: 6, valor: %i\n", ft_fibonacci(6));
	printf("Para index: 7, valor: %i\n", ft_fibonacci(7));
	printf("Para index: 8, valor: %i\n", ft_fibonacci(8));
	printf("Para index: 9, valor: %i\n", ft_fibonacci(9));
	printf("Para index: 10, valor: %i\n", ft_fibonacci(10));
	printf("Para index: -12, valor: %i\n", ft_fibonacci(-12));
	return (0);
}
