// main.c
#include <stdio.h>

// Este arquivo e o ponto de entrada do programa.
// Aqui declaramos as funcoes que estao definidas em outros arquivos,
// para que possamos chamar elas a partir do main.c e testar cada tema do tutorial.

// As funcoes demo_XXX() sao exemplos que demonstram cada conceito estudado,
// organizadas conforme as pastas do tutorial.

// Declaracoes das funcoes dos fundamentos
void demo_variables();
void demo_constants();
void demo_operators();
void demo_conditionals();
void demo_loops();
void demo_goto();

// Declaracoes das funcoes das funcoes
void demo_definicao_funcoes();
void demo_recursividade();
void demo_ponteiros_funcoes();

// Declaracoes das funcoes dos ponteiros
void demo_basico_ponteiros();
void demo_aritmetica_ponteiros();
void demo_ponteiro_para_ponteiro();

// Declaracoes das funcoes da alocacao dinamica
void demo_malloc();
void demo_realloc();

// Declaracoes das funcoes das estruturas
void demo_struct();
void demo_union();
void demo_enum();

// Declaracoes das funcoes para manipulacao de arquivos
void demo_leitura();
void demo_escrita();


int main() {
    demo_variables();
    printf("\n------------------\n\n");

    demo_constants();
    printf("\n------------------\n\n");

    demo_operators();
    printf("\n------------------\n\n");

    demo_conditionals();
    printf("\n------------------\n\n");

    demo_loops();
    printf("\n------------------\n\n");

    demo_goto();
    printf("\n------------------\n\n");

    demo_definicao_funcoes();
    printf("\n------------------\n\n");

    demo_recursividade();
    printf("\n------------------\n\n");

    demo_ponteiros_funcoes();
    printf("\n------------------\n\n");

    demo_basico_ponteiros();
    printf("\n------------------\n\n");

    demo_aritmetica_ponteiros();
    printf("\n------------------\n\n");

    demo_ponteiro_para_ponteiro();
    printf("\n------------------\n\n");

    demo_malloc();
    printf("\n------------------\n\n");

    demo_realloc();
    printf("\n------------------\n\n");

    demo_struct();
    printf("\n------------------\n\n");

    demo_union();
    printf("\n------------------\n\n");

    demo_enum();
    printf("\n------------------\n\n");


    return 0;
}
