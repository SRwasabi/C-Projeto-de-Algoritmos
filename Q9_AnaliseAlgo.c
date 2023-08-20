#include <stdio.h>
#include <math.h>

///=================================

float media3(float, float, float);
float media2(float, float, float);
float MenorValor(float, float, float);
float MaiorValor(float, float, float);

///=================================

int main(){

    float n1, n2, n3;
    printf("Informe as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

///=================================
    float M3 = media3(n1, n2, n3);
    printf("Media com 3 numeros:%.2f\n", M3);

    float M2 = media2(n1, n2, n3);
    printf("Media com 2 numeros:%.2f\n", M2);

    float Menor = MenorValor(n1, n2, n3);
    printf("Menor valor:%.2f\n", Menor);

    float Maior = MaiorValor(n1, n2, n3);
    printf("Maior valor:%.2f\n", Maior);

    return 0;
}

///=================================

float media3(float n1, float n2, float n3){
    float ValorM3 = (n1 + n2 +n3)/3;
    return ValorM3;
}

float MenorValor(float num1, float num2, float num3){
    float Menor = fmin(num1, fmin(num2, num3));
    return Menor;
}

float media2(float n1, float n2, float n3){
    float ValorM2 = ((n1 + n2 + n3) - MenorValor(n1, n2, n3))/2;
    return ValorM2;
}

float MaiorValor(float n1, float n2, float n3){
    float Maior = fmax(n1, fmax(n2, n3));
    return Maior;
}


