// goto.c
// Exemplo de uso controlado do comando goto,
// que pode desviar o fluxo para uma etiqueta especifica.
// Em geral, evite usar goto para nao deixar codigo confuso,
// mas pode ser util para sair rapidamente de multiplas estruturas.

#include <stdio.h>

void demo_goto() {
    int i;

    printf("Exemplo de uso do goto:\n");

    for (i = 0; i < 10; i++) {
        if (i == 5) {
            // Se i for 5, pula para a etiqueta 'exit_loop'
            goto exit_loop;
        }
        printf("Iteracao %d\n", i);
    }

    // Esta linha nao sera executada se o goto for chamado
    printf("Fim do loop\n");

    exit_loop:
    printf("Loop interrompido quando i era 5\n");
}
