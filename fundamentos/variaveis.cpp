// variaveis.c
// Este arquivo demonstra como declarar variaveis basicas em C,
// com tipos diferentes: inteiro, ponto flutuante e caractere.

#include <stdio.h>

void demo_variables() {
    // Declaramos uma variavel inteira chamada integerVariable e inicializamos com 10
    int integerVariable = 10;

    // Declaramos uma variavel de ponto flutuante chamada floatVariable e inicializamos com 3.14
    float floatVariable = 3.14;

    // Declaramos uma variavel caractere chamada charVariable e inicializamos com 'A'
    char charVariable = 'A';

    // Imprimimos os valores dessas variaveis na tela usando printf
    // %d para inteiro, %f para float, %c para caractere
    printf("Exemplo de variaveis em C:\n");
    printf("Inteiro: %d\n", integerVariable);
    printf("Ponto flutuante: %f\n", floatVariable);
    printf("Caractere: %c\n", charVariable);
}
