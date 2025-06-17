// basico.c
// Exemplo basico de uso dos operadores & (endereco) e * (desreferenciar) em C.
// Ponteiros sao variaveis que armazenam enderecos de memoria.
// Eles sao usados para acessar e modificar dados diretamente na memoria.

#include <stdio.h>

void demo_basico_ponteiros() {
    int number = 42;  // Variavel inteira comum

    // Declaracao de um ponteiro para inteiro
    int *pointer;

    // Ponteiro recebe o endereco de 'number' usando operador &
    pointer = &number;

    // Imprime valor da variavel 'number'
    printf("Valor da variavel number: %d\n", number);

    // Imprime endereco de memoria armazenado no ponteiro
    printf("Endereco armazenado no ponteiro: %p\n", pointer);

    // Imprime valor no endereco apontado pelo ponteiro usando operador *
    printf("Valor apontado pelo ponteiro: %d\n", *pointer);

    // Modifica valor da variavel 'number' usando ponteiro
    *pointer = 100;

    // Imprime novo valor de 'number' apos modificacao via ponteiro
    printf("Novo valor da variavel number apos modificacao via ponteiro: %d\n", number);
}
