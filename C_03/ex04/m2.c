#include <stdio.h>
int ft_strlen(char *str);
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


int main()
{
	char *str1="";
	char *str2="Como estas";

	printf("str1: %i\n",ft_strlen(str1));
	printf("str2: %i\n",ft_strlen(str2));
}
