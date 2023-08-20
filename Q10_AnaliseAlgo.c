#include <stdio.h>

int PoN(int);

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    int teste = PoN(num);
    printf("%d", teste);

    return 0;
}

int PoN(int num){
    int Valor;

    if(num >= 0){
        Valor = 1;
    }
    else{
        Valor = 0;
    }

    return Valor;
}
