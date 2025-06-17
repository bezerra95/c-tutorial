// condicionais.c
// Exemplo de estruturas de decisao em C:
// if, else if, else e switch

#include <stdio.h>

void demo_conditionals() {
    int number = 7;

    // Estrutura if simples: executa se a condicao for verdadeira
    if (number > 10) {
        printf("Numero maior que 10\n");
    }
    // else if: verifica outra condicao se a primeira for falsa
    else if (number == 10) {
        printf("Numero igual a 10\n");
    }
    // else: executa se todas as condicoes anteriores forem falsas
    else {
        printf("Numero menor que 10\n");
    }

    // Exemplo de switch: compara valor de uma variavel com casos especificos
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Nota A: Excelente\n");
            break;  // para sair do switch apos o caso ser executado
        case 'B':
            printf("Nota B: Bom\n");
            break;
        case 'C':
            printf("Nota C: Regular\n");
            break;
        default:
            printf("Nota desconhecida\n");
    }
}
