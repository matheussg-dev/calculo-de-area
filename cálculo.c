#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
const int ALVENARIA = 0;
const int VINIL = 1;
const int FIBRA = 2;
const int PLASTICO = 3;

typedef int bool;
double valorM2 = 1500; //valor do metro quadrado

void valorCasa(float lateral, float cquarto) {
    
    double areat;
    double areaq;
    double areas;
    
    printf("Programa para calculo da area da casa\n");
    if (lateral < 0 || cquarto < 0) {
            printf("Erro: parametros < 0\n");
        } else {
                areas = lateral * lateral;
            printf("A area da sala e %f\n", areas);
                areaq = cquarto * (lateral / 2);
            printf("A area do quarto e %f\n", areaq);
            printf("A area do banheiro e %f\n", areaq);
                areat = areas + 2 * areaq;
            printf("A area total e %f\n", areat);
        }
    double valorC = (areat*valorM2);
        printf("O preco da casa e de R$ %f\n", valorC);
}



double valorPiscinaCicular(double raio, int material) {
    
    double areap;
    double valorM;
    
    
      if (raio > 0) {
        areap = M_PI * pow(raio, 2);
            printf("A area da piscina cicular e de %f\n", areap);
    } else {
         printf("Piscina cicular nao inclusa\n");
        return (-1);
        }
        
    double calculoP = (int)(areap*100);
    double novaAreaP = (double)(calculoP/100);
        printf("A area da piscina simplificada e %f\n", novaAreaP);
    
    if(material == ALVENARIA) valorM = 1500;
    else
        if(material == VINIL) valorM = 1100;
        else
            if(material == FIBRA) valorM = 750;
            else
                if(material == PLASTICO) valorM = 500;
                else valorM = -1;
                
    if(raio >= 0) {           
        printf("material\tValor\n");
        while (material <= 3) {
            printf("%8i\t%9.2f\n", material, (raio*valorM));
            material = material + 1;
        }
    } else {
        return -1;
    }           
 
    double valorP = (novaAreaP*valorM);
        printf("O preco da piscina e de R$ %f\n", valorP);
    
}

double valorPiscinaCicularQuadricular(double lateralLadoPiscina, double lateralSuperiorPiscina, double material) {
    
    double valorM;
    double areaPiscinaQuadricular;
    
    if (lateralLadoPiscina > 0 || lateralSuperiorPiscina > 0) {
        areaPiscinaQuadricular = (lateralSuperiorPiscina*lateralLadoPiscina);
            printf("A area da piscina quadricular e de %f\n", areaPiscinaQuadricular);
    } else {
         printf("Piscina quadricular nao inclusa\n");
        return (-1);
        }
    
    if(material == ALVENARIA) valorM = 1500;
    else
        if(material == VINIL) valorM = 1100;
        else
            if(material == FIBRA) valorM = 750;
            else
                if(material == PLASTICO) valorM = 500;
                else valorM = -1;
                
    double valorP = (areaPiscinaQuadricular*valorM);
        printf("O preco da piscina e de R$ %f\n", valorP);
}

double valoresGerais(double construçao) {
    
    double preço;
    bool valorOK = false;
    
    preço = construçao;
    valorOK = preço > 0;
    
    if (valorOK) {
        printf("O valor do projeto e de R$ %f\n", preço);
    } else {
        printf("O valor do projeto nao foi definido\n");
    }
    printf("O valor do M2 e de R$ %f\n", valorM2);
    
}

double valor(double area) {
    if (area >= 0) {
        return (valorM2*area);
    }  else {
    return (-1);
    }
}

int main() {
    
    valorCasa(0,0);
    valorPiscinaCicular(0,0);
    valorPiscinaCicularQuadricular(0,0,0);
    valoresGerais(0);
    
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
// /t - tabulaçao(tab) /n - quebra de linha