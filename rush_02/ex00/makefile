# Nome do executável
TARGET = rush-02

# Compilador
CC = cc

# Flags de compilação (opcional)
CFLAGS = -Wall -Wextra -Wextra 

# Arquivos-fonte
SRC = main.c lib_ft.c

# Arquivos objeto
OBJ = $(SRC:.c=.o)

# Regra padrão (compila tudo)
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Regra para criar arquivos objeto
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto e executável
fclean:
	rm -f *.o $(TARGET)
	


