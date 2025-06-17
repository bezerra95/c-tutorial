// structs.c
// Exemplo de uso de structs em C para agrupar dados relacionados.
// Structs permitem criar tipos compostos, reunindo variaveis diferentes em uma unica estrutura.
// Muito usado para organizar dados complexos como registros, objetos, etc.

#include <stdio.h>

// Define uma struct chamada Person que agrupa nome, idade e altura
struct Person {
    char name[50];  // Nome da pessoa (string)
    int age;        // Idade da pessoa (inteiro)
    float height;   // Altura da pessoa (numero com ponto flutuante)
};

void demo_struct() {
    // Declara uma variavel do tipo struct Person
    struct Person person1;

    // Atribui valores aos campos da struct
    // Usamos strcpy para copiar strings em C
    // Como aqui nao vamos usar string.h, vamos atribuir direto char a char para simplificar
    person1.name[0] = 'J';
    person1.name[1] = 'o';
    person1.name[2] = 'a';
    person1.name[3] = 'o';
    person1.name[4] = '\0';  // Final da string

    person1.age = 30;
    person1.height = 1.75f;

    // Imprime os dados da struct
    printf("Pessoa: %s\n", person1.name);
    printf("Idade: %d\n", person1.age);
    printf("Altura: %.2f metros\n", person1.height);
}
