#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

typedef int bool;
double valorM2 = 1500; //valor do metro quadrado

void areaCasa(float lateral, float cquarto) {
    
    double areat;
    double areaq;
    double areas;
    
    printf("Programa para calculo da area da casa\n");
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
    double valorC = (areat*valorM2);
        printf("O preco da casa e de R$ %f\n", valorC);
}

void areaPiscina(double raio) {
    
    double areap = M_PI * pow(raio, 2);
        printf("A area da piscina e %f\n", areap);
    
    double calculoP = (int)(areap*100);
    double novaAreaP = (double)(calculoP/100);
        printf("A area da piscina simplificada e %f\n", novaAreaP);
        
    double valorP = (novaAreaP*valorM2);
        printf("O preco da piscina e de R$ %f\n", valorP);
    
}

double valor(double area) {
    if (area >= 0) {
        return (valorM2*area);
    } 
    return (-1);
}

int main() {
    
    double preço;
    bool valorOK = false;
    
    areaCasa(11,7);
    areaPiscina(2);
    preço = valor(6);
    valorOK = preço >= 0;
    
    if (valorOK) {
        printf("O valor da construçao e de R$ %f\n", preço);
    } else {
        printf("O valor de area e negativo\n");
    }
    
    printf("O valor do M2 e de R$ %f\n", valorM2);
    
    return 0;
}

// float e uma variavel que serve para mostrar os 7 digitos decimais
// double tem 2x a precisao que o float, geralmente possui 15 digitos decimais
// separando o calculo da casa e da picina
// adicionando valores para simplificar os decimais
// trunc e um comando usada para remover dígitos após o ponto decimal
// ou um calculo para simplificar a decimal
// as informaçoes fora das variaveis sao globais dentro sao privadas
// int main() {
//    
//    double preço;
//     int valorOK = 0;          verdadeiro(1)
//                               falso(0)
//    preco = valor(-20);
//    valorOK = preco >= 0; ou if (preco >= 0) valor = 1;
//                             else valorOK = 0;
//    if (valorOK) {
//        printf("O valor da construçao e de R$ %f\n", preço);
//    } else {
//        printf("O valor de area e negativo\n");
//    }
//    
//    return 0;
//}
//typedef altera a escrita de comandos como ex int para bool
