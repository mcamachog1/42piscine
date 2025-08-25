/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:16:23 by macamach          #+#    #+#             */
/*   Updated: 2025/08/06 12:00:38 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	end;

	i = 0;
	end = 0;
	while (dest[end] != '\0')
		end++;
	while (src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_empty(void)
{
	char	*strempty;

	strempty = malloc(1);
	if (!strempty)
		return (NULL);
	strempty[0] = '\0';
	return (strempty);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		n;
	int		i;
	char	*strjoin;

	n = 0;
	i = 0;
	if (size == 0)
		return (ft_str_empty());
	while (i < size)
		n += ft_strlen(strs[i++]);
	n += ft_strlen(sep) * (size - 1);
	strjoin = malloc((n + 1) * sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	strjoin[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(strjoin, strs[i]);
		if (i < size - 1)
			ft_strcat(strjoin, sep);
		i++;
	}
	return (strjoin);
}
