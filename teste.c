const int ALVENARIA = 0;
const int VINIL = 1;
const int FIBRA = 2;
const int PLASTICO = 3;

int main() {
double raio = 50;   
printf("material\tValor\n");
int material = ALVENARIA;
while (material <= PLASTICO) {
    printf("%8i\t%9.2f\n", material, areaPiscina(raio, material));
    material = material + 1;
    }
    return 0;
}
//adiciona uma lista com os valores e o material