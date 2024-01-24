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

// float e uma variavel que serve para mostrar os 7 dígitos decimais
// double tem 2x a precisão de float, geralmente possui 15 dígitos decimais

    printf("progama para cálculo da área da casa\n") ;
    areas = lateral*lateral ;
    printf("A área da sala é %f\n" , areas) ;
    areaq = cquarto*(lateral/2);
    printf("A área do quarto é %f\n" , areaq) ;
    printf("A área do banheiro é %f\n" , areaq) ;
    areat = areas + 2*areaq;
    printf("A área total é %f\n" , areat) ;
    areap = M_PI * pow(raio,2) ;
    printf("A área da picina é %f\n" , areap)
    return 0;
} 