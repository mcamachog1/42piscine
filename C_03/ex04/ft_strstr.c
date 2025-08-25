/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:41:40 by macamach          #+#    #+#             */
/*   Updated: 2025/07/28 13:01:04 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] - s2[i] == 0 && (unsigned int)i < n)
		i++;
	if ((unsigned int)i < n)
		return (s1[i] - s2[i]);
	else
		return (s1[i - 1] - s2[i - 1]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;

	n = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, n) == 0)
			return (&str[i]);
		else
			i++;
	}
	return ((void *) 0);
}
