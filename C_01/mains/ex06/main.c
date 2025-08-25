/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:54:20 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 13:17:13 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int	largo;

	str = "Ola minha cara amiga!"; // 21 caracteres
	largo = ft_strlen(str);
	printf("El largo de la cadena es: %d\n", largo);
	return (0);
}

