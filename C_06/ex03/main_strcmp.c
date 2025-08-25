#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i]  && s1[i] - s2[i] == 0)
		i++;
	return (s1[i] - s2[i]);
}

int main() {
    // Casos límite para strcmp
    char *tests[][2] = {
        {"", ""},                     // Ambas cadenas vacías
        {"abc", "abc"},               // Cadenas idénticas
        {"abc", "abd"},               // Diferencia en último carácter
        {"abc", "ab"},                // Una cadena es prefijo de la otra
        {"abc", "ABC"},               // Diferencia por mayúsculas/minúsculas
        {"", "a"},                   // Primera cadena vacía, segunda no
        {"a", ""},                   // Primera cadena no vacía, segunda vacía
        {"abcde", "abcd"},            // Diferentes longitudes, prefijo común
        {"abc\0def", "abc"},          // Cadena con terminador interno (solo compara hasta \0)
        {"abc ", "abc"},              // Diferencia por espacio al final
        {"abc", "abc "},              // Diferencia por espacio al final en segunda
        {"\xFF", "\x7F"},             // Diferencia por valores ASCII altos
    };

    int n_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n_tests; i++) {
        char *s1 = tests[i][0];
        char *s2 = tests[i][1];
        int result = strcmp(s1, s2);

        printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s2, result);
        if (result == 0) {
            printf(" -> Cadenas iguales\n");
        } else if (result < 0) {
            printf(" -> La primera cadena es menor\n");
        } else {
            printf(" -> La primera cadena es mayor\n");
        }
        printf("\n");
    }

    return 0;
}
