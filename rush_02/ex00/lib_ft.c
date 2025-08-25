/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:13:26 by macamach          #+#    #+#             */
/*   Updated: 2025/08/03 17:52:26 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] - s2[i] == 0)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	ft_isspace(char c)
{
	if ((c>= 9 && c <=13) || c == 32)
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{

		ft_putchar(str[i]);
		i++;
	}
}


char	*ft_get_key(char *line)
{
	int	len;
	char	*key;
	char	*start_key;

	len = ft_len(line);
	key = malloc(len * sizeof(char));
	start_key = key;

	while (*line != ':' && *line)
	{
		if (ft_isspace(*line))
			line++;
		else
		{
			*key = *line;
			key++;
			line++;
		}
	}
	*key = '\0';
	return (start_key);
}

char	*ft_get_value(char *line)
{
	int	len;
	char	*value;
	char	*start_value;

	len = ft_len(line);
	value = malloc(len * sizeof(char));

	start_value = value;
	while (*line != ':' && *line)
		line++;
	line++;
	while (*line)
	{
		if (ft_isspace(*line))
	
			line++;
		else
		{
			*value = *line;
			value++;
			line++;
		}
	}
	*value = '\0';
	return (start_value);
}

int	ft_count_lines(FILE *ptr)
{
	int	nlines;
	char	c;

	nlines = 0;
	c = fgetc(ptr);
	while (c != EOF)
	{
		if (c == '\n')
			nlines++;
		c = fgetc(ptr);
	}
	return (nlines);
}

int	ft_get_size_key(char *line)
{
	char	*key;

	key = ft_get_key(line);
	return (ft_len(key));
}

char *ft_get_line(FILE *fp)
{
    if (fp == NULL)
        return NULL;

    int ch;
    size_t bufsize = 128;
    size_t len = 0;
    char *line = malloc(bufsize);

    if (!line)
        return NULL;

    while ((ch = fgetc(fp)) != EOF)
    {
        line[len++] = ch;

        if (ch == '\n')
            break;

        // Redimensionar si se llena
        if (len >= bufsize)
        {
            bufsize *= 2;
            char *new_line = realloc(line, bufsize);
            if (!new_line)
            {
                free(line);
                return NULL;
            }
            line = new_line;
        }
    }

    if (len == 0 && ch == EOF)
    {
        free(line);
        return NULL; // Fin de archivo y no se leyó nada
    }

    line[len] = '\0';
    return line;
}

int	ft_atoi(char *str)
{
	int	i;
	int	sl;
	int	res;

	i = 0;
	sl = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sl = -sl;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sl);
}

int	ft_is_positive_int(char *cint)
{
	int	n;

	n = ft_atoi(cint);
	if (n >= 0)
		return (1);
	else
		return (0);
}

int	ft_get_line_from_hash(char *cint, char **hash, int nlines)
{
	int	i;

	i = 0;
	while (i < nlines)
	{
		if (ft_strcmp(cint, hash[i]) == 0)
			return (i);
		i++;
	}
	return (0);
}

FILE	*ft_get_pointer_line(int line, FILE *fp)
{
	int	i;
	char	c;

	i = 0;	
	fseek(fp, 0, SEEK_SET);
	while (i < line && c != EOF)
	{
		c = fgetc(fp);
		if (c == '\n')
			i++;
	}
	return (fp);
}
