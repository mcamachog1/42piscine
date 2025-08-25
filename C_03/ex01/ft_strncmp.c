/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:09:49 by macamach          #+#    #+#             */
/*   Updated: 2025/07/28 12:58:05 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] - s2[i] == 0 && (unsigned int)i < n)
		i++;
	if ((unsigned int)i < n)
		return (s1[i] - s2[i]);
	else
		return (s1[i - 1] - s2[i - 1]);
}
