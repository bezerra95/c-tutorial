// ponteiros_funcoes.c
// Exemplo de uso de ponteiros para funcoes em C,
// que permite passar funcoes como parametro, criando callbacks.
// Isso e util para tornar o codigo mais flexivel e modular.

#include <stdio.h>

// Definicao de uma funcao que recebe dois inteiros e retorna inteiro
typedef int (*operation)(int, int);

// Funcao que recebe dois inteiros e uma operacao (funcao) para aplicar
int compute(int a, int b, operation op) {
    // Aplica a funcao op nos argumentos a e b
    return op(a, b);
}

// Funcao que soma dois inteiros
int add(int x, int y) {
    return x + y;
}

// Funcao que multiplica dois inteiros
int multiply(int x, int y) {
    return x * y;
}

void demo_ponteiros_funcoes() {
    int a = 10;
    int b = 20;

    // Usa a funcao compute passando 'add' como callback
    int sum_result = compute(a, b, add);
    printf("Soma usando ponteiro para funcao = %d\n", sum_result);

    // Usa a funcao compute passando 'multiply' como callback
    int mul_result = compute(a, b, multiply);
    printf("Multiplicacao usando ponteiro para funcao = %d\n", mul_result);
}
