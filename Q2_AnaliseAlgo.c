#include <stdio.h>

int delta(int, int, int);

int main(){
    int a, b, c;
    printf("Escolha os valores de A B e C:\n");
    scanf("%d %d %d", &a, &b, &c);

    int resu = delta(a, b, c);
    printf("O delta eh: %d", resu);

    return 0;
}

int delta(int aE, int bE, int cE){
    int resu = (bE*bE) + (-4*aE*cE);

    return resu;
}
