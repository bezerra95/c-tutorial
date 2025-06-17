// enum.c
// Exemplo de uso de enum em C para definir constantes nomeadas inteiras.
// Enums facilitam a leitura e manutencao do codigo, substituindo numeros magicos.

#include <stdio.h>

// Define um enum chamado Day que representa os dias da semana
enum Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

void demo_enum() {
    enum Day today;

    // Atribui um valor do enum
    today = WEDNESDAY;

    // Usa switch para verificar o dia da semana
    printf("Hoje e: ");
    switch(today) {
        case SUNDAY:
            printf("Domingo\n");
            break;
        case MONDAY:
            printf("Segunda-feira\n");
            break;
        case TUESDAY:
            printf("Terca-feira\n");
            break;
        case WEDNESDAY:
            printf("Quarta-feira\n");
            break;
        case THURSDAY:
            printf("Quinta-feira\n");
            break;
        case FRIDAY:
            printf("Sexta-feira\n");
            break;
        case SATURDAY:
            printf("Sabado\n");
            break;
        default:
            printf("Dia invalido\n");
    }
}
