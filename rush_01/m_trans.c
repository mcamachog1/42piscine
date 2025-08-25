/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_trans.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipda- <felipda-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:48:40 by felipda-          #+#    #+#             */
/*   Updated: 2025/07/27 15:43:19 by felipda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*m_trans(int m[][6], int col)
{
	int *result;
	result[1] = m[0][col];
	result[2] = m[1][col];
	result[3] = m[2][col];
	result[4] = m[3][col];
	return (result);
}
