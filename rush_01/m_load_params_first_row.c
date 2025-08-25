/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_load_params_first_row.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:46:23 by macamach          #+#    #+#             */
/*   Updated: 2025/07/27 14:55:51 by gsilvest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		m_get_first_number(char *stra);
char	*m_nexts_params(char *str);

char	*m_load_params_first_row(char *parameters, int matriz[][6])
{
	char	*input;
	int		col1top;
	int		col2top;
	int		col3top;
	int		col4top;

	col1top = m_get_first_number(parameters);
	input = m_nexts_params(parameters);
	col2top = m_get_first_number(input);
	input = m_nexts_params(input);
	col3top = m_get_first_number(input);
	input = m_nexts_params(input);
	col4top = m_get_first_number(input);
	input = m_nexts_params(input);
	matriz [0][0] = 0;
	matriz [0][1] = col1top;
	matriz [0][2] = col2top;
	matriz [0][3] = col3top;
	matriz [0][4] = col4top;
	matriz [0][5] = 0;
	return (input);
}
