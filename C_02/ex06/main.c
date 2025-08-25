/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:12:54 by macamach          #+#    #+#             */
/*   Updated: 2025/07/24 15:35:55 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Para printf

int 	ft_str_is_printable(char *str);

int	main(void)
{
	int	value;

	value = ft_str_is_printable("12\n3ahYTR");
	printf("Debe dar 0 y da: %i\n", value);
	value = ft_str_is_printable("Tnmn* */kR\\YFGT");
	printf("Debe dar 1 y da: %i\n", value);
	value = ft_str_is_printable("G\tTFgR");
	printf("Debe dar 0 y da: %i\n", value);
	value = ft_str_is_printable("");
	printf("Debe dar 1 y da: %i\n", value);

}	
