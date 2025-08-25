/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_load_params_last_row.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipda- <felipda-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:14:44 by felipda-          #+#    #+#             */
/*   Updated: 2025/07/27 15:26:47 by gsilvest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		m_get_first_number(char *stra);
char	*m_nexts_params(char *str);

char	*m_load_params_last_row(char *parameters, int matriz[][6])
{
	char	*input;
	int		col1bottom;
	int		col2bottom;
	int		col3bottom;
	int		col4bottom;

	input = m_load_params_last_row(pameters, matriz);
	col1bottom = m_get_first_number(input);
	input = m_nexts_params(input);
	col2bottom = m_get_first_number(input);
	input = m_nexts_params(input);
	col3bottom = m_get_first_number(input);
	input = m_nexts_params(input);
	col4bottom = m_get_first_number(input);
	input = m_nexts_params(input);
	matriz [5][0] = 0;
	matriz [5][1] = col1bottom;
	matriz [5][2] = col2bottom;
	matriz [5][3] = col3bottom;
	matriz [5][4] = col4bottom;
	matriz [5][5] = 0;
	return (input);
}
