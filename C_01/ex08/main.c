/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:51:06 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 11:18:50 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Necesario para printf

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
    
	int arr_unsorted[] = {64, 34, 25, 30, 65, 90, 7, 5, 1, -3};
    	int n =  sizeof (arr_unsorted) / sizeof (arr_unsorted[0]);

	printf("Arreglo original: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr_unsorted[i]);
	} 
  
	ft_sort_int_tab(arr_unsorted, n);
	printf("Arreglo ordenado: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr_unsorted[i]);
	}
	printf("\n");
	return 0;
}

