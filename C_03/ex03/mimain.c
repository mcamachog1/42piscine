#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
    char buffer[20];

    // Caso 1: Concatenar menos caracteres que src tiene (normal)
    strcpy(buffer, "Hola");
    ft_strncat(buffer, " Mundo", 3);
    printf("Caso 1 (3 chars): '%s'\n", buffer);  // Esperado: "Hola Mu"

    // Caso 2: Concatenar más caracteres que src tiene
    strcpy(buffer, "Hola");
    ft_strncat(buffer, " Mundo", 10);
    printf("Caso 2 (10 chars): '%s'\n", buffer); // Esperado: "Hola Mundo"

    // Caso 3: Concatenar 0 caracteres (no debe cambiar buffer)
    strcpy(buffer, "Hola");
    ft_strncat(buffer, " Mundo", 0);
    printf("Caso 3 (0 chars): '%s'\n", buffer);  // Esperado: "Hola"

    // Caso 4: Buffer destino casi lleno (riesgo de overflow)
    strcpy(buffer, "123456789012345"); // 15 chars
    // Quedan 4 bytes en buffer de 20 bytes (incluye '\0')
    ft_strncat(buffer, "ABCD", 5);  // Intenta concatenar 5 chars
    printf("Caso 4 (buffer casi lleno): '%s'\n", buffer);

    // Caso 5: Concatenar cadena vacía
    strcpy(buffer, "Hola");
    ft_strncat(buffer, "", 5);
    printf("Caso 5 (cadena vacía): '%s'\n", buffer); // Esperado: "Hola"

    // Caso 6: Buffer destino vacío
    buffer[0] = '\0';
    ft_strncat(buffer, "Hola", 10);
    printf("Caso 6 (destino vacío): '%s'\n", buffer); // Esperado: "Hola"

    return 0;
}

