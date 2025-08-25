/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:04:32 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 12:04:49 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 2890;
	b = 50;
	div = 74;
	mod = 77;
	write(1, &div, 1);
	write(1, &mod, 1);
	ft_div_mod(a, b, &div, &mod);
	write(1, &div, 1);
	write(1, &mod, 1);
	return (0);
}
