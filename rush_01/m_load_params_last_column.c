/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_load_params_last_column.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipda- <felipda-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:24:16 by felipda-          #+#    #+#             */
/*   Updated: 2025/07/27 12:29:36 by felipda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     m_get_first_number(char *stra);
char    *m_nexts_params(char *str);

char    *m_load_params_last_column(char *parameters, int matriz[][6])
{
        char    *input;

	int     row1right;
        int     row2right;
        int     row3right;
        int     row4right;

	row1right = m_get_first_number(input);
        input = m_nexts_params(input);
        row2right = m_get_first_number(input);
        input = m_nexts_params(input);
        row3right = m_get_first_number(input);
        input = m_nexts_params(input);
        row4right = m_get_first_number(input);

        matriz [1][5] = row1right;
        matriz [2][5] = row2right;
        matriz [3][5] = row3right;
        matriz [4][5] = row4right;
        matriz [5][5] = 0;

	return (input);
