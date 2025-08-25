/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:37:29 by macamach          #+#    #+#             */
/*   Updated: 2025/07/22 16:48:51 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Para printf
#include <string.h> // Puedes incluir <string.h> para comparar con la strcpy estándar si quieres,
                    // pero no es estrictamente necesario para probar tu ft_strncpy.

// Tu función ft_strncpy (tal como la proporcionaste)
char *ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
    // --- Caso de Prueba 1: src es más corto que n ---
    // Debería copiar toda la cadena src y rellenar el resto de dest con '\0'
    char dest1[20];
    char src1[] = "Hola"; // Longitud: 4 + '\0' = 5
    unsigned int n1 = 10;
    printf("--- Caso 1: src es mas corto que n ---\n");
    printf("Src: \"%s\", n: %u\n", src1, n1);
    ft_strncpy(dest1, src1, n1);
    printf("Dest: \"%s\" (esperado \"Hola\" y el resto nulos)\n", dest1);
    // Para verificar los nulos, podemos imprimir byte a byte o usar strlen
    printf("Longitud de dest1 (con strlen): %lu\n", strlen(dest1)); // Debería ser 4
    // Imprimir byte a byte para ver los nulos:
    printf("Dest1 (byte a byte): ");
    for (int i = 0; i < 15; i++) { // Imprimimos un poco mas para ver los nulos
        if (dest1[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", dest1[i]);
    }
    printf("\n\n");


    // --- Caso de Prueba 2: src es más largo que n ---
    // Debería copiar solo 'n' caracteres de src y NO terminar con '\0' si n < longitud(src)
    char dest2[10]; // Asegúrate de que dest2 tenga espacio para n caracteres
    char src2[] = "Programacion en C"; // Longitud: 17 + '\0' = 18
    unsigned int n2 = 7;
    printf("--- Caso 2: src es mas largo que n ---\n");
    printf("Src: \"%s\", n: %u\n", src2, n2);
    ft_strncpy(dest2, src2, n2);
    // Aquí es crucial entender que dest2 NO estará terminada en nulo si n es menor que strlen(src)
    // El comportamiento de printf con una cadena no terminada en nulo es indefinido.
    // Para probar, podemos imprimir caracteres uno por uno hasta 'n'.
    printf("Dest (los primeros %u caracteres): \"", n2);
    for (unsigned int i = 0; i < n2; i++) {
        printf("%c", dest2[i]);
    }
    printf("\n\n");
    printf("\"\n");
    printf("NOTA: Si 'n' es menor que la longitud de 'src', dest no estara terminada en nulo.\n");
    printf("  Esto es un comportamiento estandar de strncpy y tu funcion lo replica.\n");
    printf("  Ten cuidado al usar esta cadena sin anadir un '\\0' manualmente.\n\n");


    // --- Caso de Prueba 3: src es exactamente igual a n (longitud del contenido) ---
    // Debería copiar 'n' caracteres y NO terminar con '\0'
    char dest3[5];
    char src3[] = "Cinco"; // Longitud: 5 + '\0' = 6
    unsigned int n3 = 5;
    printf("--- Caso 3: src es exactamente igual a n (longitud del contenido) ---\n");
    printf("Src: \"%s\", n: %u\n", src3, n3);
    ft_strncpy(dest3, src3, n3);
    printf("Dest (los primeros %u caracteres): \"", n3);
    for (unsigned int i = 0; i < n3; i++) {
        printf("%c", dest3[i]);
    }
    printf("\"\n");
    printf("  De nuevo, no esta terminada en nulo. %s\n\n", "Espera 'Cinco'");


    // --- Caso de Prueba 4: n es 0 ---
    // No debería copiar nada
    char dest4[10];
    char src4[] = "Cero";
    unsigned int n4 = 0;
    // Rellenamos dest4 con un valor conocido para ver si cambia
    for (int i = 0; i < 10; i++) {
        dest4[i] = 'X';
    }
    printf("--- Caso 4: n es 0 ---\n");
    printf("Src: \"%s\", n: %u\n", src4, n4);
    ft_strncpy(dest4, src4, n4);
    printf("Dest (primeros 5): \"%.5s\" (esperado \"XXXXX\")\n", dest4);
    printf("  (La cadena no fue modificada ya que n es 0)\n\n");


    // --- Caso de Prueba 5: src es una cadena vacía ---
    // Debería rellenar dest con nulos
    char dest5[10];
    char src5[] = "";
    unsigned int n5 = 5;
    printf("--- Caso 5: src es una cadena vacia ---\n");
    printf("Src: \"%s\", n: %u\n", src5, n5);
    ft_strncpy(dest5, src5, n5);
    printf("Dest: \"%s\" (esperado \"\")\n", dest5);
    printf("Longitud de dest5 (con strlen): %lu\n", strlen(dest5)); // Debería ser 0
    printf("Dest5 (byte a byte para ver nulos): ");
    for (int i = 0; i < n5 + 2; i++) { // Imprimimos un poco mas
        if (dest5[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", dest5[i]);
    }
    printf("\n\n");

    return 0;
}
