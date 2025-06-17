// unions.c
// Exemplo de uso de unions em C para compartilhar memoria entre diferentes tipos.
// Uma union ocupa a memoria do maior membro e todos os campos compartilham o mesmo endereco.
// Util para economizar memoria quando se usa variaveis mutuamente exclusivas.

#include <stdio.h>

// Define uma union chamada Data que pode armazenar int, float ou char
union Data {
    int i;
    float f;
    char str[20];
};

void demo_union() {
    union Data data;

    // Atribui um valor inteiro a union
    data.i = 10;
    printf("Valor inteiro: %d\n", data.i);

    // Agora atribui um valor float, sobrescrevendo o anterior
    data.f = 220.5;
    printf("Valor float: %.2f\n", data.f);

    // Como os campos compartilham memoria, o valor inteiro nao e mais valido
    // Agora atribuimos uma string (array de chars)
    data.str[0] = 'O';
    data.str[1] = 'k';
    data.str[2] = '\0';

    printf("Valor string: %s\n", data.str);

    // Note que so o ultimo valor atribuido e valido, pois union compartilha memoria
}
