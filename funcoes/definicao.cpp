// definicao.c
// Exemplo basico de definicao e uso de funcoes em C.
// Funcoes ajudam a organizar o codigo em blocos reutilizaveis.
// Mostraremos funcao que soma dois numeros e imprime resultado.

#include <stdio.h>

// Definicao da funcao que recebe dois inteiros e retorna a soma
int sum(int a, int b) {
    // A funcao soma 'a' e 'b' e retorna o resultado
    return a + b;
}

// Funcao que imprime uma mensagem
void print_message() {
    printf("Esta e uma funcao que imprime uma mensagem\n");
}

void demo_definicao_funcoes() {
    int x = 5;
    int y = 10;

    // Chamada da funcao sum e armazenamento do resultado
    int result = sum(x, y);

    // Imprime o resultado da soma
    printf("Soma de %d e %d = %d\n", x, y, result);

    // Chama funcao que imprime mensagem
    print_message();
}
