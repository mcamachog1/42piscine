/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:16:39 by macamach          #+#    #+#             */
/*   Updated: 2025/07/21 10:17:37 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	numero;	

	start = 0;
	end = size - 1;
	while (start < end)
	{
		numero = tab[end];
		tab[end] = tab[start];
		tab[start] = numero;
		start++;
		end--;
	}
}
