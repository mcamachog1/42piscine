/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:12:54 by macamach          #+#    #+#             */
/*   Updated: 2025/07/23 11:42:26 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Para printf
#include <string.h> //  Para strcpy() 

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[50];

	// It does not work declare array this way
	// char *str
	// str = "Mayusculas todas POR FavoR";

	strcpy(str, "MInuSCULAS 89877%% **  todAS"); 
	printf("String original: %s\n", str);
	ft_strlowcase(str);
	printf("String en minusculas: %s\n", str);
	
	return (0);

}	
