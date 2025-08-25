/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:35:47 by macamach          #+#    #+#             */
/*   Updated: 2025/08/04 12:56:19 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	n;

	if (min >= max)
		return (NULL);
	n = max - min;
	array = malloc(n * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
