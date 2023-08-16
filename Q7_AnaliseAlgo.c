#include <stdio.h>
#include <stdlib.h>
#include<time.h>
///=======================
int Dado();

int main(){
    int valor = 0;
    valor = Dado();
    printf("O dado deu: %d", valor);

    return 0;
}

int Dado(){
    srand(time(NULL));
    int valor = (rand()) ;
    return ((valor % 6)+1);
}
