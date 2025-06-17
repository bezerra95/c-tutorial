// constantes.c
// Aqui mostramos como usar constantes em C,
// utilizando #define e a palavra-chave const.

#include <stdio.h>

// Definicao de constante com #define
#define PI 3.14159

void demo_constants() {
    // Definicao de constante com const
    const int daysInWeek = 7;

    // Imprimimos os valores das constantes
    printf("Exemplo de constantes em C:\n");
    printf("Constante definida com #define PI: %f\n", PI);
    printf("Constante definida com const daysInWeek: %d\n", daysInWeek);
}
