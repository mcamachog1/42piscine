#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	
	char *src = "source";
	char *find = "";
	
	printf("iLlamar strcmp: %i\n", ft_strncmp(src, find, 0));
	return (0);
}
