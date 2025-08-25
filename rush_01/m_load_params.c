/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_load_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:35:42 by macamach          #+#    #+#             */
/*   Updated: 2025/07/27 12:34:54 by felipda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	m_get_first_number(char *stra);
char	*m_nexts_params(char *str);


char	*m_load_params_first_row(char *parameters, int matriz[][6]);
char	*m_load_params_last_row(char *parameters, int matriz[][6]);
char	*m_load_params_first_column(char *parameters, int matriz[][6]);
char	*m_load_params_last_column(char *parameters, int matriz[][6]);
 
int m_load_params(char *parameters, int matriz[][6]) {

	char	*input;

	// first row parameters
	input = m_load_params_first_row(parameters,matriz);	
	// last row parameters
	input = m_load_params_last_row(pameters,matriz);
	// first column parameters
	input = m_load_params_first_column(parameters,matriz);
	// last column parameters
	 input = m_load_params_first_column(parameters,matriz);

	 return 0;
}

