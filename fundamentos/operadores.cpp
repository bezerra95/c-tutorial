// operadores.c
// Exemplo simples de operadores aritmeticos e logicos em C.

#include <stdio.h>

void demo_operators() {
    int a = 10;
    int b = 3;

    printf("Exemplo de operadores aritmeticos:\n");

    // Operacoes basicas com inteiros
    printf("Soma: %d + %d = %d\n", a, b, a + b);
    printf("Subtracao: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicacao: %d * %d = %d\n", a, b, a * b);
    printf("Divisao inteira: %d / %d = %d\n", a, b, a / b);
    printf("Resto da divisao: %d %% %d = %d\n", a, b, a % b);

    printf("\nExemplo de operadores logicos:\n");

    int c = 1; // verdadeiro
    int d = 0; // falso

    // Operadores logicos AND, OR e NOT
    printf("AND logico (&&): %d && %d = %d\n", c, d, c && d);
    printf("OR logico (||): %d || %d = %d\n", c, d, c || d);
    printf("NOT logico (!): !%d = %d\n", c, !c);
}
