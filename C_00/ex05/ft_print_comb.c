/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:41:48 by macamach          #+#    #+#             */
/*   Updated: 2025/07/17 16:04:50 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char	unidades;
	char	decenas;
	char	centenas;

	unidades = '0';
	decenas = '0';
	centenas = '0';
	while (centenas <= '9')
	{
		while (decenas <= '9')
		{
			while (unidades <= '9')
			{
				if (unidades > decenas && decenas > centenas)
				{
					write(1, &centenas, 1);
					write(1, &decenas, 1);
					write(1, &unidades, 1);
					write(1, ", ", 1);
				}
				unidades++;
			}
			unidades = '0';
			decenas++;
		}
		decenas = '0';
		centenas++;
	}
}
