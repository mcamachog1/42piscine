/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:11:36 by macamach          #+#    #+#             */
/*   Updated: 2025/07/17 16:03:05 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
/*
int	main(void)
{
	int	numero;

	numero = -2;
	ft_is_negative(numero);
	numero = 3;
	ft_is_negative(numero);
	numero = 0;
	ft_is_negative(numero);
	return (0);
}
*/

void	ft_is_negative(int n)
{
	char	signo;

	signo = 'P';
	if (n < 0)
	{
		signo = 'N';
	}
	write(1, &signo, 1);
}
