/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:12:54 by macamach          #+#    #+#             */
/*   Updated: 2025/07/23 09:29:05 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Para printf

int 	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	value;

	value = ft_str_is_lowercase("123ahYTR");
	printf("Debe dar 0 y da: %i\n", value);
	value = ft_str_is_lowercase("usdjsjdh");
	printf("Debe dar 1 y da: %i\n", value);
	value = ft_str_is_lowercase("ahhygR");
	printf("Debe dar 0 y da: %i\n", value);
	value = ft_str_is_lowercase("");
	printf("Debe dar 1 y da: %i\n", value);

}	
