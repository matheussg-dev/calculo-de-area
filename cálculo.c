#include <stdio.h>
#include <math.h>



void areaPiscina(double raio) {
    
    
    double areap = M_PI * pow(raio, 2);
    
    printf("A area da picina e %f\n" ,areap);
    
    double calculoP = (int)(areap*100);
    double novaAreaP = (double)(calculoP/100);
    
    printf("A area da picina simplificada e %f\n", novaAreaP);
    
   
}

void areaCasa(float lateral, float cquarto) {
    
    float areaq;
    float areas;
    
    printf("programa para calculo da area da casa\n");
    if (lateral < 0) {
        printf("Erro: lateral da sala < 0\n");
    } else {
        if (cquarto < 0) {
            printf("Erro: lateral do quarto < 0\n");
        } else {
            printf("Programa para calculo da area da casa\n");
            areas = lateral * lateral;
            printf("A area da sala e %f\n", areas);
            areaq = cquarto * (lateral / 2);
            printf("A area do quarto e %f\n", areaq);
            printf("A area do banheiro e %f\n", areaq);
            areat = areas + 2 * areaq;
            printf("A area total e %f\n", areat);
        }
   }
}
double valorM {
    
    double valorM2 = 1500; //valor do metro quadrado
    double valor = (areat*valorM2);
    
    printf("O preco da casa e de %f\n", valor);
}
int main() {
    
    double areat;
    
    areaCasa(11,7);
    areaPiscina(2);
    valorM();
    
    return 0;
}

// float e uma variavel que serve para mostrar os 7 digitos decimais
// double tem 2x a precisao de float, geralmente possui 15 digitos decimais
// separando o calculo da casa e da picina
// adicionando valores para simplificar os decimais
// trunc e um comando usada para remover dígitos após o ponto decimal
// ou um calculo para simplificar a decimal