// leitura.c
// Exemplo de leitura de arquivos em C usando fscanf e fgets
// Demonstramos como abrir um arquivo, ler dados formatados e ler linha a linha

#include <stdio.h>

// Funcao para demonstrar leitura com fscanf e fgets
void demo_leitura() {
    FILE *file; // Ponteiro para o arquivo
    char nome[50];
    int idade;

    // Tenta abrir o arquivo "dados.txt" para leitura ("r")
    file = fopen("dados.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir arquivo para leitura\n");
        return;
    }

    // Le a primeira linha formatada: nome e idade
    // fscanf tenta ler uma string e um inteiro, separados por espaco
    if (fscanf(file, "%49s %d", nome, &idade) == 2) {
        printf("Leitura com fscanf:\n");
        printf("Nome: %s, Idade: %d\n", nome, idade);
    } else {
        printf("Erro na leitura formatada\n");
    }

    // Le a proxima linha usando fgets (le uma linha inteira como string)
    char linha[100];
    if (fgets(linha, sizeof(linha), file) != NULL) {
        printf("Leitura com fgets:\n");
        printf("%s", linha); // fgets ja inclui o '\n' no final da string lida
    } else {
        printf("Erro ao ler linha com fgets\n");
    }

    // Fecha o arquivo apos o uso
    fclose(file);
}
