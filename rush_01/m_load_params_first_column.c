/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_load_params_first_column.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipda- <felipda-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:18:17 by felipda-          #+#    #+#             */
/*   Updated: 2025/07/27 14:24:09 by gsilvest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*m_next_params(char *str);
int		m_get_first_number(char *str);

char	*m_load_params_first_column(char *parameters, int matriz[][6])
{
	char	*input;
	int		row1left;
	int		row2left;
	int		row3left;
	int		row4left;

	row1left = m_get_first_number(input);
	input = m_nexts_params(input);
	row2left = m_get_first_number(input);
	input = m_nexts_params(input);
	row3left = m_get_first_number(input);
	input = m_nexts_params(input);
	row4left = m_get_first_number(input);
	input = m_nexts_params(input);
	matriz [1][0] = row1left;
	matriz [2][0] = row2left;
	matriz [3][0] = row3left;
	matriz [4][0] = row4left;
	matriz [5][0] = 0;
	return (input);
}
