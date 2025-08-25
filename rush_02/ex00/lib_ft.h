#ifndef LIB_FT_H
#define LIB_FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_isspace(char c);
int	ft_len(char *str);
char	*ft_get_key(char *line);
char	*ft_get_value(char *line);
int	ft_count_lines(FILE *ptr);
char	*ft_get_line(FILE *fp);
int	ft_get_size_key(char *line);
int	ft_is_positive_int(char *cint);
int	ft_get_line_from_hash(char *cint, char **hash, int nlines);
int	ft_strcmp(char *s1, char *s2);
int	ft_atoi(char *str);
FILE	*ft_get_pointer_line(int line, FILE *fp);


#endif
