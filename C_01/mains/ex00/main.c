/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:34:38 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 09:39:57 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

//Devuelve una 'H' seguida de un '*'
int	main(void)
{
	int	*ptr_int;
	int 	ascii;

	ascii = 72; 
	ptr_int = &ascii;
	write(1,&ascii,1);
	ft_ft(ptr_int);
	write(1,&ascii,1);

}
