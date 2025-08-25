/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:42:03 by macamach          #+#    #+#             */
/*   Updated: 2025/08/07 12:13:42 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_digit_of_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
}

int	ft_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_has_duplicates(char *str)
{
	int	used[126];
	int	i;
	int	ascii;

	i = 0;
	while (i < 126)
	{
		used[i] = 0;
		i++;
	}
	i = 0;
	while (str[i])
	{
		ascii = str[i] + 48;
		if (used[ascii] == 1)
			return (1);
		else
		{
			used[ascii] = 1;
			i++;
		}
	}
	return (0);
}

int	ft_invalid_argument(char *base)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (base[len])
		len++;
	if (len == 0 || len == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] > 8 && base[i] < 14) || base[i] == 32)
			return (1);
		if (ft_has_duplicates(base))
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	factor;
	int	number;
	int	nbase;

	factor = 1;
	number = 0;
	nbase = 0;
	if (ft_invalid_argument(base))
		return (0);
	while (base[nbase])
		nbase++;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			factor *= -1;
		str++;
	}
	while (ft_is_digit_of_base(*str, base))
	{
		number = number * nbase + ft_value(*str, base);
		str++;
	}
	return (number * factor);
}



int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}

