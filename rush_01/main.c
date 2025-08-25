/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvest <gsilvest@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:03:51 by gsilvest          #+#    #+#             */
/*   Updated: 2025/07/26 14:45:56 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char **matrix(char *)


int main(int agvc , char *agv[])
{
	int i;
	int j;

	i = 0;
       	j = 0;

	
	
	if(agvc != 2)
	{
		printf("Erro de parametros");
		return(0);
	}
	while(i < 6)
	{
		j=0;
		while(j < 6)
		{
			write(1, "*", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;	
	}

}


