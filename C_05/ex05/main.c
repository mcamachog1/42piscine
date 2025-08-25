/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:36:25 by macamach          #+#    #+#             */
/*   Updated: 2025/07/30 11:44:30 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("sqrt de 9 = %i\n", ft_sqrt(9));
	printf("sqrt de 0 = %i\n", ft_sqrt(0));
	printf("sqrt de 1 = %i\n", ft_sqrt(1));
	printf("sqrt de 3 = %i\n", ft_sqrt(3));
	printf("sqrt de -4 = %i\n", ft_sqrt(-4));
	printf("sqrt de 4 = %i\n", ft_sqrt(4));
	printf("sqrt de 144 = %i\n", ft_sqrt(144));
	printf("sqrt de 250 = %i\n", ft_sqrt(250));
	printf("sqrt de 16901 = %i\n", ft_sqrt(16901));
	printf("sqrt de 16900 = %i\n", ft_sqrt(16900));
	return (0);
}
