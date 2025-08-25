/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_get_first_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:23:38 by macamach          #+#    #+#             */
/*   Updated: 2025/07/27 13:32:39 by gsilvest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	m_get_first_number(char *str)
{
	char	number[2];

	while (*str == ' ')
		str++;
	if (*str)
	{
		number[0] = *str;
		number[1] = '\0';
	}
	else
		return (0);
	return (atoi(number));
}
