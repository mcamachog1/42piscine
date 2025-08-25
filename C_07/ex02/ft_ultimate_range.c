/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:33:18 by macamach          #+#    #+#             */
/*   Updated: 2025/08/04 13:07:01 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	i;
	int	n;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	*range = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < n)
	{
		(*range)[i] = min + i;
		i++;
	}
	if (*range == NULL)
		return (-1);
	else
		return (max - min);
}
