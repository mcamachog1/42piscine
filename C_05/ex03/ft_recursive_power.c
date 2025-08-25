/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:55:56 by macamach          #+#    #+#             */
/*   Updated: 2025/07/30 10:11:29 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		if (power == 1)
			return (nb);
		else
			return (nb * ft_recursive_power(nb, --power));
	}
	return (0);
}
