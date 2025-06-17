// ponteiro_ponteiro.c
// Exemplo de uso de ponteiro para ponteiro (multipla indirecao).
// Ponteiro para ponteiro e uma variavel que armazena o endereco de outro ponteiro.
// Util para manipular arrays dinamicos, matrizes e passar ponteiros por referencia.

#include <stdio.h>

void demo_ponteiro_para_ponteiro() {
    int value = 500;

    // Ponteiro para inteiro
    int *ptr = &value;

    // Ponteiro para ponteiro para inteiro
    int **ptr_ptr = &ptr;

    // Imprime valor da variavel value diretamente
    printf("Valor de value: %d\n", value);

    // Imprime valor usando ponteiro ptr
    printf("Valor usando ponteiro ptr: %d\n", *ptr);

    // Imprime valor usando ponteiro para ponteiro ptr_ptr
    printf("Valor usando ponteiro para ponteiro ptr_ptr: %d\n", **ptr_ptr);

    // Modifica valor de value atraves do ponteiro para ponteiro
    **ptr_ptr = 1000;

    // Imprime novo valor de value apos modificacao
    printf("Novo valor de value apos modificacao via ponteiro para ponteiro: %d\n", value);
}
