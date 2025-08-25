#include <stdio.h>
#include <stdlib.h>
#include "lib_ft.h"

int main(int argc, char *argv[]) {
  FILE *fp;
  int	nlines;
  int   line;
  int	*sizes;
  int	i;
  char 	**hash = NULL;
  char	*temp;	
  char  *cint;
  char  *value;

  // Validate parameters
  if (argc > 3 || argc < 2)
  {
    ft_putstr("Error\n");
    return (1);
  }
  if (argc == 2)
  {
    if (!ft_is_positive_int(argv[1]))
    {
      ft_putstr("Error\n");
      return (1);
    }
    cint = argv[1]; 		
    fp = fopen("numbers.dict", "r");
  }
  else
  {
    if (!ft_is_positive_int(argv[2]))
    {
      ft_putstr("Error\n");
      return (1);
    }
    cint = argv[2];
    fp = fopen(argv[1], "r");
  }

  // Verifica se o ficheiro foi aberto com sucesso 
  if (fp == NULL) {
   ft_putstr("Erro ficheiro");
    return 1;
  }
  // Get total lines of the file
  nlines =  ft_count_lines(fp);
  // sizes is an array of ints with nlines positions
  sizes = (int *)malloc(nlines * sizeof(int));
  // Fill array with key size of each line
  fseek(fp, 0, SEEK_SET);
  i = 0;
  while (i < nlines)
  {
    temp = ft_get_line(fp);
    sizes[i] = ft_get_size_key(temp);
    free(temp);	
    i++;
  }
  
  // Create hash table
  hash = (char **)malloc(nlines * sizeof(char *));
  // Alocate memory for each line using sizes
  fseek(fp, 0, SEEK_SET);
  i = 0;
  while (i < nlines)
  {    
    hash[i] = (char *)malloc(sizes[i] * sizeof(char));
    i++;
  }
  // Save key value on each line (array position)
  fseek(fp, 0, SEEK_SET);
  i = 0;
  while (i < nlines)
  {
    temp = ft_get_line(fp);
    hash[i] = ft_get_key(temp);
    free(temp);    
    i++;
  }
  line = ft_get_line_from_hash(cint, hash, nlines);
  fp = ft_get_pointer_line(line, fp);
  temp = ft_get_line(fp);
  value = ft_get_value(temp);
  ft_putstr(value);
  
  free(hash);
  // Fecha o ficheiro
  fclose(fp);
  return 0;
}
