#include <stdio.h>

float tempC(float);
float tempF(float);

int main(){
    int Controle;
    float Temperatura;

    printf("\tQual eh a conversao desejada?\n Digite 1 para converter de Celcius para Fahrenheit\n Digite 2 para converter de Fahrenheit para Celcius\n");
    printf("\t");
    scanf("%d", &Controle);

    switch (Controle){
    case 1:
        printf("Informe os graus em Celcius: ");
        scanf("%f", &Temperatura);
        Temperatura = tempF(Temperatura);
        printf("Em Fahrenheit a temperatura eh: %.2f graus\n", Temperatura);
        break;

    case 2:
        printf("Informe os graus em Fahrenheit: ");
        scanf("%f", &Temperatura);
        Temperatura = tempC(Temperatura);
        printf("Em Celcius a temperatura eh: %.2f graus\n", Temperatura);
        break;

    default:
        printf("Sinto muito, mas essa opcao nao existe\n");
        break;
    }

    return 0;
}

float tempF(float temperatura){
    float tempEmF = (temperatura * 1.8) + 32;
    return tempEmF;
}

float tempC(float temperatura){
    float tempEmC = (temperatura - 32) / 1.8;
    return tempEmC;
}
