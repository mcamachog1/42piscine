/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:20:31 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 11:07:28 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index1;
	int	index2;
	int	temp;

	index1 = 0;
	while (index1 < size - 1)
	{
		index2 = 0;
		while (index2 < size - 1)
		{
			if (tab[index2] > tab[index2 + 1])
			{
				temp = tab[index2];
				tab[index2] = tab[index2 + 1];
				tab[index2 + 1] = temp;
			}
			index2++;
		}
		index1++;
	}
}
