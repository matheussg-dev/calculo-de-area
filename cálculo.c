#include <stdio.h>
#include <math.h>

int main() {
    double areap;
    double valorM2 = 1500;

    areaCASA(11,7);

    areap = areaPiscina(2);
    printf("A área da picina é %f\n" , areap);
    return 0;
}

void areaCASA(float lateral, float cquarto) {

    float areaq;
    float areas;
    float areat;

    printf("progama para cálculo da área da casa\n");
        areas = lateral*lateral;
    printf("A área da sala é %f\n", areas);
        areaq = cquarto*(lateral/2);
    printf("A área do quarto é %f\n", areaq);
    printf("A área do banheiro é %f\n", areaq);
        areat = areas + 2*areaq;
    printf("A área total é %f\n", areat);
}

double areap(double raio) {
    return M_PI*pow(raio, 2);
}

double valor(double area) {
    areat = 3;
    valorM2 = 5;
    return(valor area);
}

// float e uma variavel que serve para mostrar os 7 dígitos decimais
// double tem 2x a precisão de float, geralmente possui 15 dígitos decimais
// separando o calculo da casa e da picina
// adicionando valores para simplificar os decimais