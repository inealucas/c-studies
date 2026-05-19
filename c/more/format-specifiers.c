#include <stdio.h>

int main() {

    // Especificadores de formato (%)
    // Usados no printf para mostrar valores na tela

    int idade = 18;
    float altura = 1.75;
    double peso = 70.5;
    char nota = 'A';
    char nome[] = "Lucas";

    printf("%d\n", idade);
    // %d = inteiro (int)

    printf("%f\n", altura);
    // %f = número decimal (float)

    printf("%lf\n", peso);
    // %lf = número decimal com dupla precisão (double)

    printf("%c\n", nota);
    // %c = caractere único (char)

    printf("%s\n", nome);
    // %s = texto/string (array de chars)

    return 0;
}