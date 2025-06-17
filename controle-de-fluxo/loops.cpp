// loops.c
// Exemplo de estruturas de repeticao em C:
// for, while e do-while

#include <stdio.h>

void demo_loops() {
    int i;

    printf("Exemplo de for loop:\n");
    // for: repeticao com contador definido
    for (i = 0; i < 5; i++) {
        printf("Iteracao %d\n", i);
    }

    printf("\nExemplo de while loop:\n");
    i = 0;
    // while: executa enquanto condicao for verdadeira
    while (i < 5) {
        printf("Iteracao %d\n", i);
        i++;
    }

    printf("\nExemplo de do-while loop:\n");
    i = 0;
    // do-while: executa pelo menos uma vez e depois repete enquanto condicao for verdadeira
    do {
        printf("Iteracao %d\n", i);
        i++;
    } while (i < 5);
}
