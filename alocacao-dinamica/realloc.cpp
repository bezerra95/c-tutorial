// realloc.c
// Exemplo de redimensionamento de memoria alocada dinamicamente usando realloc.
// realloc ajusta o tamanho de um bloco de memoria previamente alocado com malloc,
// podendo aumentar ou diminuir o tamanho.
// Importante para arrays dinamicos quando precisamos alterar tamanho em tempo de execucao.

#include <stdio.h>
#include <stdlib.h>  // Para realloc e free

void demo_realloc() {
    int n = 3;  // Tamanho inicial do array
    int *array = (int *)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Erro: nao foi possivel alocar memoria\n");
        return;
    }

    // Inicializa array com valores
    for (int i = 0; i < n; i++) {
        array[i] = (i + 1) * 5;
    }

    // Imprime array inicial
    printf("Array inicial:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Agora queremos aumentar o tamanho do array para 6 elementos
    int new_size = 6;

    // Usa realloc para redimensionar o bloco de memoria
    int *temp = (int *)realloc(array, new_size * sizeof(int));

    if (temp == NULL) {
        printf("Erro: nao foi possivel realocar memoria\n");
        // Se realloc falhar, o ponteiro original ainda e valido, entao liberamos memoria
        free(array);
        return;
    }

    array = temp;

    // Inicializa os novos elementos adicionados apos o redimensionamento
    for (int i = n; i < new_size; i++) {
        array[i] = (i + 1) * 5;
    }

    // Imprime array apos o redimensionamento e inicializacao dos novos valores
    printf("Array apos realloc para tamanho maior:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Libera memoria ao final
    free(array);
}
