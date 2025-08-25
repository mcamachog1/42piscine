/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <macamach@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:15:55 by macamach          #+#    #+#             */
/*   Updated: 2025/08/07 15:03:49 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int n, char *base)
{
	char	number;
	int		nbase;

	nbase = 0;
	while (base[nbase])
		nbase++;
	if (n == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(2, base);
		ft_putnbr(147483648, base);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= nbase)
		ft_putnbr(n / nbase, base);
	number = base[n % nbase];
	write(1, &number, 1);
	return ;
}

int	main(int argc, char *argv[])
{
	(void)argv;
	if (argc != 3)
	{
		printf("Erro\n");
		return (1);
	}
	ft_putnbr(-2147483647, "0123456789");
	return (0);
}
