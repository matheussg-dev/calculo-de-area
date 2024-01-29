#include <stdio.h>
#include <math.h>

int main() {
    float lateral = 10;
    float cquarto = 7;
    float areaq;
    float areas;
    float areat;
    double raio = 2;
    double areap;

    printf("programa para calculo da area da casa\n");

    areas = lateral * lateral;
    printf("A area da sala e %f\n", areas);

    areaq = cquarto * (lateral / 2);
    printf("A area do quarto e %f\n", areaq);
    printf("A area do banheiro e %f\n", areaq);

    areat = areas + 2 * areaq;
    printf("A area total e %f\n", areat);

    areap = M_PI * pow(raio, 2);
    printf("A area da piscina e %f\n", areap);

    return 0;
}

// float e uma variavel que serve para mostrar os 7 digitos decimais
// double tem 2x a precisao de float, geralmente possui 15 digitos decimais
// separando o calculo da casa e da picina
// adicionando valores para simplificar os decimais