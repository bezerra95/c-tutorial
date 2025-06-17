// malloc.c
// Exemplo basico de alocacao dinamica de memoria usando a funcao malloc em C.
// Alocacao dinamica permite reservar memoria em tempo de execucao, diferente
// de variaveis estaticas que tem tamanho fixo durante compilacao.
// Muito util para trabalhar com dados cujo tamanho nao e conhecido antes.

#include <stdio.h>
#include <stdlib.h>  // Para malloc e free

void demo_malloc() {
    int n = 5;  // Queremos um array de 5 inteiros

    // Aloca memoria para n inteiros usando malloc
    // malloc retorna um ponteiro para void que precisa ser convertido para tipo correto
    int *array = (int *)malloc(n * sizeof(int));

    // Verifica se malloc retornou NULL (memoria insuficiente)
    if (array == NULL) {
        printf("Erro: nao foi possivel alocar memoria\n");
        return;
    }

    // Preenche o array dinamico com valores
    for (int i = 0; i < n; i++) {
        array[i] = (i + 1) * 10;
    }

    // Imprime os valores armazenados
    printf("Valores no array alocado dinamicamente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Libera a memoria alocada quando nao for mais necessaria
    free(array);
}
