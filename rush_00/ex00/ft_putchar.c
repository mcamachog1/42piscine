/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:25:45 by macamach          #+#    #+#             */
/*   Updated: 2025/07/19 12:25:22 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
int	main(void)
{
	char	c;

	c = 'n';
	ft_putchar(c);
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
