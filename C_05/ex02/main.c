/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:42:29 by macamach          #+#    #+#             */
/*   Updated: 2025/07/30 09:54:08 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("2^8 = %i\n", ft_iterative_power(2, 8));
	printf("2^0 = %i\n", ft_iterative_power(2, 0));
	printf("2^1 = %i\n", ft_iterative_power(2, 1));
	printf("2^-3 = %i\n", ft_iterative_power(2, -3));
	printf("(-2)^3 = %i\n", ft_iterative_power(-2, 3));
	printf("(-2)^4 = %i\n", ft_iterative_power(-2, 4));
	printf("0^0 = %i\n", ft_iterative_power(0, 0));
	return (0);
}
