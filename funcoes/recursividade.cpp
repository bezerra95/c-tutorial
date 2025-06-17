// recursividade.c
// Exemplo de funcao recursiva em C.
// Funcao recursiva e aquela que se chama a si mesma para resolver um problema,
// geralmente com condicao de parada para evitar loop infinito.
// Exemplo: calculo do fatorial de um numero.

#include <stdio.h>

// Funcao recursiva que calcula fatorial de n (n!)
int factorial(int n) {
    // Caso base: fatorial de 0 ou 1 e 1
    if (n <= 1) {
        return 1;
    }
    // Chamada recursiva: n * fatorial(n-1)
    return n * factorial(n - 1);
}

void demo_recursividade() {
    int number = 5;

    // Calcula o fatorial de number usando funcao recursiva
    int result = factorial(number);

    // Imprime resultado
    printf("Fatorial de %d = %d\n", number, result);
}
