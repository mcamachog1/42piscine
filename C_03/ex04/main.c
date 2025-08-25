#include <stdio.h>
#include <string.h>

int main() {
    char *haystack;
    char *needle;
    char *result;

    // Caso 1: Búsqueda normal - subcadena presente
    haystack = "Hola Mundo";
    needle = "Mun";
    result = strstr(haystack, needle);
    printf("Caso 1: '%s' en '%s' -> %s\n", needle, haystack, result ? result : "No encontrado");

    // Caso 2: Subcadena vacía (debería devolver haystack)
    haystack = "Hola Mundo";
    needle = "";
    result = strstr(haystack, needle);
    printf("Caso 2: Subcadena vacía en '%s' -> %s\n", haystack, result ? result : "No encontrado");

    // Caso 3: Subcadena no presente
    haystack = "Hola Mundo";
    needle = "XYZ";
    result = strstr(haystack, needle);
    printf("Caso 3: '%s' en '%s' -> %s\n", needle, haystack, result ? result : "No encontrado");

    // Caso 4: Subcadena igual a la cadena completa
    haystack = "Hola Mundo";
    needle = "Hola Mundo";
    result = strstr(haystack, needle);
    printf("Caso 4: '%s' en '%s' -> %s\n", needle, haystack, result ? result : "No encontrado");

    // Caso 5: Búsqueda en cadena vacía
    haystack = "";
    needle = "a";
    result = strstr(haystack, needle);
    printf("Caso 5: '%s' en cadena vacía -> %s\n", needle, result ? result : "No encontrado");

    // Caso 6: Ambas cadenas vacías (debe devolver cadena vacía)
    haystack = "";
    needle = "";
    result = strstr(haystack, needle);
    printf("Caso 6: Ambas cadenas vacías -> %s\n", result ? result : "No encontrado");

    // Caso 7: Subcadena es un solo carácter presente varias veces
    haystack = "banana";
    needle = "a";
    result = strstr(haystack, needle);
    printf("Caso 7: '%s' en '%s' -> %s\n", needle, haystack, result ? result : "No encontrado");

    return 0;
}

