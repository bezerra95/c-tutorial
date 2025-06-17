// aritmetica.c
// Exemplo de aritmetica de ponteiros em C.
// Ponteiros podem ser incrementados ou decrementados para apontar
// para proximos ou anteriores enderecos na memoria.
// Isso e muito usado para percorrer arrays.

#include <stdio.h>

void demo_aritmetica_ponteiros() {
    int array[] = {10, 20, 30, 40, 50};
    int *pointer = array;  // Ponteiro aponta para o primeiro elemento do array

    // Imprime todos os elementos do array usando aritmetica de ponteiros
    for (int i = 0; i < 5; i++) {
        // Imprime valor apontado pelo ponteiro
        printf("Elemento %d = %d\n", i, *pointer);

        // Incrementa o ponteiro para apontar para o proximo elemento do array
        pointer++;
    }
}
