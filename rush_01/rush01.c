/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipda- <felipda-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:04:03 by felipda-          #+#    #+#             */
/*   Updated: 2025/07/27 11:40:27 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	m_print (int m[][6]);
int	m_initialize(int m[][6]);
int 	m_load_params(char *parameters, int matriz[][6]); 

int     main(int argc, char* argv[])
{
        int     m[6][6];
	int	i;
	char	*params;	

	if (argc != 2)
	{
		printf("Erro de perametros\n");
		return (1);
	}
        m_initialize(m);
	m_load_params(argv[1], m);
	m_print(m);
        return 0;
} 
