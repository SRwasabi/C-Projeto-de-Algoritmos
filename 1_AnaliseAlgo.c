#include <stdio.h>

void verificar(int);

int main(){
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    verificar(num);

    return 0;
}

void verificar(int n){
    if (n > 0){
        printf("Ele eh positivo");
    }
    else if (n == 0){
        printf("Ele eh nulo");
    }
    else{
        printf("Ele eh negativo");
    }
    return 0;
}
