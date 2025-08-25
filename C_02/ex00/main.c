/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:01:58 by macamach          #+#    #+#             */
/*   Updated: 2025/07/22 15:32:58 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Para printf
#include <string.h> // Para strcpy

//char	*ft_strcpy(char *dest, char *src);
char	*ft_strcpy2(char *dest, char *src);

int	main(void)
{
	char	origen[] = "Hola Mundo";
	char	destino[26];
	
	printf("\nCadena de origen: \"%s\"\n", origen);

	//strcpy(destino, origen);
	ft_strcpy2(destino, origen);

	printf("\nCadena de destino: \"%s\"\n", destino);

	return 0;

}
