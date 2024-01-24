#include <stdio.h>
int main() {
    int lateral = 10;
    int cquarto = 7;
    int areaq;
    int areas;
    int areat;
// int / i e a variavel dos numeros inteiros então o resulta como ex não pode dar 11/2 = 5.5
    printf("progama para cálculo da área da casa\n");
    areas = lateral*lateral ;
    printf("A área da sala é %i\n" , areas);
    areaq = cquarto*(lateral/2);
    printf("A área do quarto é %i\n" , areaq);
    printf("A área do banheiro é %i\n" , areaq);
    areat = areas + 2*areaq;
    printf("A área total é %i\n" , areat);
    return 0;
} 