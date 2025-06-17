// escrita.c
// Exemplo de escrita em arquivos em C usando fprintf e fputs
// Mostramos como abrir um arquivo para escrita e gravar texto formatado e linhas

#include <stdio.h>

// Funcao para demonstrar escrita em arquivo
void demo_escrita() {
    FILE *file; // Ponteiro para o arquivo

    // Abre o arquivo "saida.txt" para escrita ("w")
    // Se o arquivo existir, sera sobrescrito
    file = fopen("saida.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir arquivo para escrita\n");
        return;
    }

    // Escreve uma linha formatada com fprintf
    fprintf(file, "Nome: %s, Idade: %d\n", "Maria", 25);

    // Escreve uma linha simples com fputs
    fputs("Esta e uma linha escrita com fputs\n", file);

    // Fecha o arquivo apos a escrita
    fclose(file);
}
