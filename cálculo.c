#include <stdio.h>
int main() {
    float lateral = 10;
    float cquarto = 7;
    float areaq;
    float areas;
    float areat;
// float e uma variavel que serve para mostrar os decimais
    printf("progama para cálculo da área da casa\n");
    areas = lateral*lateral ;
    printf("A área da sala é %f\n" , areas);
    areaq = cquarto*(lateral/2);
    printf("A área do quarto é %f\n" , areaq);
    printf("A área do banheiro é %f\n" , areaq);
    areat = areas + 2*areaq;
    printf("A área total é %f\n" , areat);
    return 0;
} 